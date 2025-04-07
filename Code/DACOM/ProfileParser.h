#pragma once

struct DACOM_NO_VTABLE ProfileParser : public IProfileParser
{
	//
	// interface mapping
	//
	BEGIN_DACOM_MAP_INBOUND(ProfileParser)
	DACOM_INTERFACE_ENTRY(IProfileParser)
	DACOM_INTERFACE_ENTRY2(IID_IProfileParser,IProfileParser)
	END_DACOM_MAP()

	//
	// data items
	//

	C8 * fileBuffer;
	U32 bufferSize;


	//
	// startup / shutdown code
	//

	GENRESULT init (PROFPARSEDESC * info) { return GR_OK; }

	DA_HEAP_DEFINE_NEW_OPERATOR(ProfileParser);

	ProfileParser( void )
	{
		fileBuffer = NULL;
		bufferSize = 0;
	}

	~ProfileParser (void)
	{
		free();
	}


	/* IProfileParser methods */

	DACOM_DEFMETHOD(Initialize) (const C8 *fileName, ACCESS access = READ_ACCESS );

	DACOM_DEFMETHOD_(BOOL32,EnumerateSections) (ENUM_PROC proc = 0, void *context=0);
	
	DACOM_DEFMETHOD_(HANDLE,CreateSection) (const C8 *sectionName, CREATE_MODE mode = PP_OPENEXISTING);

	DACOM_DEFMETHOD_(BOOL32,CloseSection) (HANDLE hSection);

	DACOM_DEFMETHOD_(U32,ReadProfileLine) (HANDLE hSection, U32 lineNumber, C8 * buffer, U32 bufferSize);

	DACOM_DEFMETHOD_(U32,ReadKeyValue) (HANDLE hSection, const C8 * keyName, C8 * buffer, U32 bufferSize);

	/* ProfileParser methods */

	void free (void);

	static const char * __fastcall getLine (const char *buffer, int line);

	static const char * __fastcall getSection (const char * buffer, int count);

	const char * getLine (HANDLE hSection, int line)
	{
		return getLine(fileBuffer+((U32)hSection), line);
	}
};
