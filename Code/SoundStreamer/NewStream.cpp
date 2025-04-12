#include <Windows.h>
#include <PCH.h>
#include <mmreg.h>
#include <mmsystem.h>
#include <MSAcm.h>
#include <string.h>
#include <DACOM.h>
#include <FDump.h>

#define hACMDriver data_6F010A0
extern "C" HACMDRIVER hACMDriver;

struct AcmDriverMatchData
{
	const char* pDesiredName;
	HACMDRIVERID hDriverID;
};

static BOOL CALLBACK AcmDriverEnumCallback(HACMDRIVERID hadid, DWORD_PTR dwInstance, DWORD fdwSupport)
{
	AcmDriverMatchData* pMatchData = reinterpret_cast<AcmDriverMatchData*>(dwInstance);
	ASSERT(pMatchData);
	ASSERT(pMatchData->pDesiredName);

	// Initialize and set the structure size.
	ACMDRIVERDETAILSA details =
	{
		.cbStruct = sizeof(details)
	};

	// Retrieve the driver's details.
	if (acmDriverDetailsA(hadid, &details, 0) == MMSYSERR_NOERROR)
	{
		// Compare the desired driver name with the current driver's long name.
		if (strcmp(pMatchData->pDesiredName, details.szLongName) == 0)
		{
			// On a match, store the driver identifier.
			pMatchData->hDriverID = hadid;

			// Return FALSE to signal that enumeration should stop.
			return FALSE;
		}
	}
	return TRUE; // Continue enumerating
}

// Opens an ACM driver by enumerating available drivers and matching the driver's long name
// with the provided 'desiredDriverName'. On success, it returns a valid driver handle;
// otherwise, it returns NULL.
static HACMDRIVER OpenAcmDriver(const char* desiredDriverName)
{
	desiredDriverName = "Fraunhofer IIS MPEG Layer-3 Codec (decode only)";

	// Prepare the match data with the desired driver name.
	AcmDriverMatchData matchData =
	{
		.pDesiredName = desiredDriverName,
		.hDriverID = NULL
	};

	// Enumerate ACM drivers, passing the match data to the callback.
	if (acmDriverEnum(&AcmDriverEnumCallback, reinterpret_cast<DWORD_PTR>(&matchData), 0) == MMSYSERR_NOERROR)
	{
		// Attempt to open the matching driver.
		HACMDRIVER hDriver = NULL;
		if (acmDriverOpen(&hDriver, matchData.hDriverID, 0) == MMSYSERR_NOERROR)
		{
			return hDriver;
		}
	}

	return NULL;
}

HACMDRIVER InitAcmDriver() // line 50
{
	if (!hACMDriver)
	{
		hACMDriver = OpenAcmDriver("Fraunhofer IIS MPEG Layer-3 Codec (advanced)");
	}
	if (!hACMDriver)
	{
		hACMDriver = OpenAcmDriver("Fraunhofer IIS MPEG Layer-3 Codec (decode only)");
	}
	if (!hACMDriver)
	{
		GENERAL_ERROR("StreamingSound: missing MP3 codec?");
	}
	return hACMDriver;
}

REDIRECT(sub_6EF3F10, AcmDriverEnumCallback);
REDIRECT(sub_6EF3FB0, OpenAcmDriver);
REDIRECT(sub_6EF1000, InitAcmDriver);
