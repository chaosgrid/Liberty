#include "dacom.h"
#include "DACOManager.h"

// extern "C" interface to guarantee static linkage without name-mangling 
extern "C"
{
	// All clients of DACOM (including component objects as well as the
	// application itself) must call DACOM_Acquire() to obtain an instance
	// pointer to the DA Component Manager
	DACOM_DEC ICOManager* __cdecl DACOM_Acquire(void)
	{
		// Single, application-global static instance declared here
		static DACOManager manager;

		// Return pointer to application-global static instance
		return &manager;
	}

	// This allows clients to retrieve the version information about a DLL.
	// The version information is pulled out of the product version resource in the DLL and
	// returned.
	DACOM_DEC GENRESULT DACOM_GetDllVersion(const char* dll_name, U32* out_major, U32* out_minor, U32* out_build)
	{
		VS_FIXEDFILEINFO ffi;
		TCHAR filename[MAX_PATH];
		DWORD dwDummyHandle, len; // will always be set to zero
		HMODULE hModule = NULL;
		LPVOID lpvi;
		UINT iLen;
		BYTE* vi;

		memset(&ffi, 0, sizeof(VS_FIXEDFILEINFO));

		*out_major = 0;
		*out_minor = 0;
		*out_build = 0;

		if ((hModule = ::LoadLibraryA(dll_name)) == NULL)
		{
			return GR_GENERIC;
		}

		if (GetModuleFileName(hModule, filename, sizeof(filename) / sizeof(filename[0])) <= 0)
		{
			return GR_GENERIC;
		}

		if ((len = GetFileVersionInfoSize(filename, &dwDummyHandle)) <= 0)
		{
			return GR_GENERIC;
		}

		vi = new BYTE[len]; // allocate version info

		if (::GetFileVersionInfo(filename, 0, len, vi) == 0)
		{
			delete[] vi;
			return GR_GENERIC;
		}

		if (VerQueryValue(vi, TEXT("\\"), &lpvi, &iLen) == 0)
		{
			return GR_GENERIC;
		}

		// copy fixed info to myself, which am derived from VS_FIXEDFILEINFO
		*(VS_FIXEDFILEINFO*)&ffi = *(VS_FIXEDFILEINFO*)lpvi;

		FreeLibrary(hModule);

		delete[] vi;

		*out_major = (ffi.dwProductVersionMS & 0xFFFF0000) >> 16;
		*out_minor = (ffi.dwProductVersionMS & 0x000FFFF);
		//	U32 unused = (ffi.dwProductVersionLS & 0xFFFF0000) >> 16;
		*out_build = (ffi.dwProductVersionLS & 0x000FFFF);

		return GR_OK;
	}

	// This allows clients to retrieve DACOM information before acquiring/initializing
	// DACOM itself.  This loads the version out of the product version resource of the 
	// DACOM.dll that will be/would be/was used when the application calls DACOM_Acquire()
	DACOM_DEC GENRESULT DACOM_GetVersion(U32* out_major, U32* out_minor, U32* out_build)
	{
		GENRESULT gr;

		if (SUCCEEDED(gr = DACOM_GetDllVersion("DACOM.DLL", out_major, out_minor, out_build)))
		{
			GENERAL_NOTICE(TEMPSTR("Current DACOM.DLL version: %d.%d.%d\n", *out_major, *out_minor, *out_build));
			GENERAL_NOTICE(TEMPSTR(" Compiled against version: %d.%d.%d\n", LIB_MAJOR, LIB_MINOR, LIB_BUILD));
		}

		return gr;
	}

	// but.. why..??
	DACOM_DEC int __cdecl stricmp(char const* String1, char const* String2)
	{
		return _stricmp(String1, String2);
	}
}

DACOM_DEC int __cdecl DACOM_CRC::CompareStringsI(char const* String1, char const* String2)
{
	return _stricmp(String1, String2);
}

#define CRC32_POLYNOMIAL 0xEDB88320L

unsigned long crc32(const void* data, size_t length) {
	unsigned long crc = 0xFFFFFFFF;
	const unsigned char* bytes = (const unsigned char*)data;

	for (size_t i = 0; i < length; ++i) {
		crc ^= bytes[i];
		for (int j = 0; j < 8; ++j) {
			if (crc & 1) {
				crc = (crc >> 1) ^ CRC32_POLYNOMIAL;
			}
			else {
				crc >>= 1;
			}
		}
	}

	return crc ^ 0xFFFFFFFF;
}

DACOM_DEC unsigned long __cdecl DACOM_CRC::GetCRC32(char const* start, char const* end)
{
	return crc32(start, start - end);
}

int dword_65B8530[256] =
{
  0,
  151466134,
  302932268,
  453595578,
  -9583591,
  -160762737,
  -312236747,
  -463170141,
  -19167182,
  -136529756,
  -321525474,
  -439166584,
  28724267,
  145849533,
  330837255,
  448732561,
  -38334364,
  -189783822,
  -273059512,
  -423738914,
  47895677,
  199091435,
  282375505,
  433292743,
  57448534,
  174827712,
  291699066,
  409324012,
  -67019697,
  -184128295,
  -300991133,
  -418902539,
  -76668728,
  -227995554,
  -379567644,
  -530091662,
  67364049,
  218420295,
  369985021,
  520795499,
  95791354,
  213031020,
  398182870,
  515701056,
  -86479645,
  -203465611,
  -388624945,
  -506380967,
  114897068,
  266207290,
  349655424,
  500195606,
  -105581387,
  -256654301,
  -340093543,
  -490887921,
  -134039394,
  -251295736,
  -368256590,
  -485758684,
  124746887,
  241716241,
  358686123,
  476458301,
  -153337456,
  -2395898,
  -455991108,
  -304803798,
  162629001,
  11973919,
  465560741,
  314102835,
  134728098,
  16841012,
  436840590,
  319723544,
  -144044613,
  -26395347,
  -446403433,
  -329032703,
  191582708,
  40657250,
  426062040,
  274858062,
  -200894995,
  -50223749,
  -435620671,
  -284179369,
  -172959290,
  -55056048,
  -406931222,
  -289830788,
  182263263,
  64630089,
  416513267,
  299125861,
  229794136,
  78991822,
  532414580,
  381366498,
  -220224191,
  -69691945,
  -523123603,
  -371788549,
  -211162774,
  -93398532,
  -513308602,
  -396314416,
  201600371,
  84090341,
  503991391,
  386759881,
  -268078788,
  -117292630,
  -502591472,
  -351526778,
  258520357,
  107972019,
  493278217,
  341959839,
  249493774,
  131713432,
  483432482,
  366454964,
  -239911657,
  -122417791,
  -474129349,
  -356881235,
  -306674912,
  -457198666,
  -4791796,
  -156118374,
  315967289,
  466778031,
  14362133,
  165418627,
  325258002,
  442776452,
  23947838,
  141187752,
  -334573813,
  -452329571,
  -33509849,
  -150495567,
  269456196,
  419996626,
  33682024,
  184992510,
  -278767779,
  -429561909,
  -43239823,
  -194312473,
  -288089226,
  -405591072,
  -52790694,
  -170046772,
  297394031,
  415166457,
  62373443,
  179343061,
  383165416,
  533828478,
  81314500,
  232780370,
  -373594127,
  -524527769,
  -72022307,
  -223201717,
  -401789990,
  -519431348,
  -100447498,
  -217810336,
  392228803,
  510123861,
  91131631,
  208256633,
  -345918580,
  -496598246,
  -110112096,
  -261561802,
  336361365,
  487278339,
  100800185,
  251995695,
  364526526,
  482151208,
  129260178,
  246639108,
  -354943065,
  -472854735,
  -119955829,
  -237064675,
  459588272,
  308539942,
  157983644,
  7181066,
  -469170519,
  -317835713,
  -167286907,
  -16754925,
  -440448382,
  -323454444,
  -139383890,
  -21619912,
  450006683,
  332774925,
  148697015,
  31186721,
  -422325548,
  -271261118,
  -186797064,
  -36011154,
  431888077,
  280569435,
  196114401,
  45565815,
  403200742,
  286222960,
  168180682,
  50400092,
  -412770561,
  -295522711,
  -177471533,
  -59977915,
  -536157576,
  -384970002,
  -234585260,
  -83643454,
  526853729,
  375396087,
  225003341,
  74348507,
  517040714,
  399923932,
  215944038,
  98057200,
  -507728301,
  -390357307,
  -206385281,
  -88735767,
  498987548,
  347783818,
  263426864,
  112501670,
  -489671163,
  -338229613,
  -253864151,
  -103192641,
  -479823314,
  -362722632,
  -244835582,
  -126932076,
  470531639,
  353144481,
  235265819,
  117632909
}; // weak
unsigned __int8 byte_65B8930[256] =
{
  (unsigned char)'\0',
  (unsigned char)'\x01',
  (unsigned char)'\x02',
  (unsigned char)'\x03',
  (unsigned char)'\x04',
  (unsigned char)'\x05',
  (unsigned char)'\x06',
  (unsigned char)'\a',
  (unsigned char)'\b',
  (unsigned char)'\t',
  (unsigned char)'\n',
  (unsigned char)'\v',
  (unsigned char)'\f',
  (unsigned char)'\r',
  (unsigned char)'\x0E',
  (unsigned char)'\x0F',
  (unsigned char)'\x10',
  (unsigned char)'\x11',
  (unsigned char)'\x12',
  (unsigned char)'\x13',
  (unsigned char)'\x14',
  (unsigned char)'\x15',
  (unsigned char)'\x16',
  (unsigned char)'\x17',
  (unsigned char)'\x18',
  (unsigned char)'\x19',
  (unsigned char)'\x1A',
  (unsigned char)'\x1B',
  (unsigned char)'\x1C',
  (unsigned char)'\x1D',
  (unsigned char)'\x1E',
  (unsigned char)'\x1F',
  (unsigned char)' ',
  (unsigned char)'!',
  (unsigned char)'\"',
  (unsigned char)'#',
  (unsigned char)'$',
  (unsigned char)'%',
  (unsigned char)'&',
  (unsigned char)'\'',
  (unsigned char)'(',
  (unsigned char)')',
  (unsigned char)'*',
  (unsigned char)'+',
  (unsigned char)',',
  (unsigned char)'-',
  (unsigned char)'.',
  (unsigned char)'/',
  (unsigned char)'0',
  (unsigned char)'1',
  (unsigned char)'2',
  (unsigned char)'3',
  (unsigned char)'4',
  (unsigned char)'5',
  (unsigned char)'6',
  (unsigned char)'7',
  (unsigned char)'8',
  (unsigned char)'9',
  (unsigned char)':',
  (unsigned char)';',
  (unsigned char)'<',
  (unsigned char)'=',
  (unsigned char)'>',
  (unsigned char)'?',
  (unsigned char)'@',
  (unsigned char)'a',
  (unsigned char)'b',
  (unsigned char)'c',
  (unsigned char)'d',
  (unsigned char)'e',
  (unsigned char)'f',
  (unsigned char)'g',
  (unsigned char)'h',
  (unsigned char)'i',
  (unsigned char)'j',
  (unsigned char)'k',
  (unsigned char)'l',
  (unsigned char)'m',
  (unsigned char)'n',
  (unsigned char)'o',
  (unsigned char)'p',
  (unsigned char)'q',
  (unsigned char)'r',
  (unsigned char)'s',
  (unsigned char)'t',
  (unsigned char)'u',
  (unsigned char)'v',
  (unsigned char)'w',
  (unsigned char)'x',
  (unsigned char)'y',
  (unsigned char)'z',
  (unsigned char)'[',
  (unsigned char)'\\',
  (unsigned char)']',
  (unsigned char)'^',
  (unsigned char)'_',
  (unsigned char)'`',
  (unsigned char)'a',
  (unsigned char)'b',
  (unsigned char)'c',
  (unsigned char)'d',
  (unsigned char)'e',
  (unsigned char)'f',
  (unsigned char)'g',
  (unsigned char)'h',
  (unsigned char)'i',
  (unsigned char)'j',
  (unsigned char)'k',
  (unsigned char)'l',
  (unsigned char)'m',
  (unsigned char)'n',
  (unsigned char)'o',
  (unsigned char)'p',
  (unsigned char)'q',
  (unsigned char)'r',
  (unsigned char)'s',
  (unsigned char)'t',
  (unsigned char)'u',
  (unsigned char)'v',
  (unsigned char)'w',
  (unsigned char)'x',
  (unsigned char)'y',
  (unsigned char)'z',
  (unsigned char)'{',
  (unsigned char)'|',
  (unsigned char)'}',
  (unsigned char)'~',
  (unsigned char)'\x7F',
  (unsigned char)'\x80',
  (unsigned char)'\x81',
  (unsigned char)'\x82',
  (unsigned char)'\x83',
  (unsigned char)'\x84',
  (unsigned char)'\x85',
  (unsigned char)'\x86',
  (unsigned char)'\x87',
  (unsigned char)'\x88',
  (unsigned char)'\x89',
  (unsigned char)'\x8A',
  (unsigned char)'\x8B',
  (unsigned char)'\x8C',
  (unsigned char)'\x8D',
  (unsigned char)'\x8E',
  (unsigned char)'\x8F',
  (unsigned char)'\x90',
  (unsigned char)'\x91',
  (unsigned char)'\x92',
  (unsigned char)'\x93',
  (unsigned char)'\x94',
  (unsigned char)'\x95',
  (unsigned char)'\x96',
  (unsigned char)'\x97',
  (unsigned char)'\x98',
  (unsigned char)'\x99',
  (unsigned char)'\x9A',
  (unsigned char)'\x9B',
  (unsigned char)'\x9C',
  (unsigned char)'\x9D',
  (unsigned char)'\x9E',
  (unsigned char)'\x9F',
  (unsigned char)'\xA0',
  (unsigned char)'\xA1',
  (unsigned char)'\xA2',
  (unsigned char)'\xA3',
  (unsigned char)'\xA4',
  (unsigned char)'\xA5',
  (unsigned char)'\xA6',
  (unsigned char)'\xA7',
  (unsigned char)'\xA8',
  (unsigned char)'\xA9',
  (unsigned char)'\xAA',
  (unsigned char)'\xAB',
  (unsigned char)'\xAC',
  (unsigned char)'\xAD',
  (unsigned char)'\xAE',
  (unsigned char)'\xAF',
  (unsigned char)'\xB0',
  (unsigned char)'\xB1',
  (unsigned char)'\xB2',
  (unsigned char)'\xB3',
  (unsigned char)'\xB4',
  (unsigned char)'\xB5',
  (unsigned char)'\xB6',
  (unsigned char)'\xB7',
  (unsigned char)'\xB8',
  (unsigned char)'\xB9',
  (unsigned char)'\xBA',
  (unsigned char)'\xBB',
  (unsigned char)'\xBC',
  (unsigned char)'\xBD',
  (unsigned char)'\xBE',
  (unsigned char)'\xBF',
  (unsigned char)'\xC0',
  (unsigned char)'\xC1',
  (unsigned char)'\xC2',
  (unsigned char)'\xC3',
  (unsigned char)'\xC4',
  (unsigned char)'\xC5',
  (unsigned char)'\xC6',
  (unsigned char)'\xC7',
  (unsigned char)'\xC8',
  (unsigned char)'\xC9',
  (unsigned char)'\xCA',
  (unsigned char)'\xCB',
  (unsigned char)'\xCC',
  (unsigned char)'\xCD',
  (unsigned char)'\xCE',
  (unsigned char)'\xCF',
  (unsigned char)'\xD0',
  (unsigned char)'\xD1',
  (unsigned char)'\xD2',
  (unsigned char)'\xD3',
  (unsigned char)'\xD4',
  (unsigned char)'\xD5',
  (unsigned char)'\xD6',
  (unsigned char)'\xD7',
  (unsigned char)'\xD8',
  (unsigned char)'\xD9',
  (unsigned char)'\xDA',
  (unsigned char)'\xDB',
  (unsigned char)'\xDC',
  (unsigned char)'\xDD',
  (unsigned char)'\xDE',
  (unsigned char)'\xDF',
  (unsigned char)'\xE0',
  (unsigned char)'\xE1',
  (unsigned char)'\xE2',
  (unsigned char)'\xE3',
  (unsigned char)'\xE4',
  (unsigned char)'\xE5',
  (unsigned char)'\xE6',
  (unsigned char)'\xE7',
  (unsigned char)'\xE8',
  (unsigned char)'\xE9',
  (unsigned char)'\xEA',
  (unsigned char)'\xEB',
  (unsigned char)'\xEC',
  (unsigned char)'\xED',
  (unsigned char)'\xEE',
  (unsigned char)'\xEF',
  (unsigned char)'\xF0',
  (unsigned char)'\xF1',
  (unsigned char)'\xF2',
  (unsigned char)'\xF3',
  (unsigned char)'\xF4',
  (unsigned char)'\xF5',
  (unsigned char)'\xF6',
  (unsigned char)'\xF7',
  (unsigned char)'\xF8',
  (unsigned char)'\xF9',
  (unsigned char)'\xFA',
  (unsigned char)'\xFB',
  (unsigned char)'\xFC',
  (unsigned char)'\xFD',
  (unsigned char)'\xFE',
  (unsigned char)'\xFF'
}; // weak

DACOM_DEC unsigned long __cdecl DACOM_CRC::GetCRC32(char const* string)
{
	unsigned int result = UINT_MAX;
	if(unsigned const char* position = reinterpret_cast<unsigned char const*>(string))
	{
		while(unsigned char c = *position++)
		{
			result = dword_65B8530[(unsigned __int8)result ^ byte_65B8930[c]] ^ (result >> 8);
		}
	}
	result = ~result;
	return result;
}

DACOM_DEC unsigned long __cdecl DACOM_CRC::GetContinuedCRC32(unsigned long, char)
{
	__debugbreak();
	throw;
	return 0;
}

DACOM_DEC unsigned long __cdecl DACOM_CRC::GetContinuedCRC32(unsigned long, char const*)
{
	__debugbreak();
	throw;
	return 0;
}

DACOM_DEC void LogStream::FlushToDisk(void)
{
	// empty
}

DACOM_DEC void LogStream::LogEvent(char const*, float, unsigned long)
{
	// empty
}

DACOM_DEC void LogStream::LogNamedEvent(char const*, char const*, unsigned long)
{
	// empty
}

DACOM_DEC bool LogStream::Startup(char const*)
{
	return 0;
}

DACOM_DEC void LogStream::Update(float)
{
	// empty
}
