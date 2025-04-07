#pragma once

#include "ProfileParser.h"

struct DACOM_NO_VTABLE ProfileParser2 : public IProfileParser2, ProfileParser
{
	//
	// interface mapping
	//
	BEGIN_DACOM_MAP_INBOUND(ProfileParser2)
	DACOM_INTERFACE_ENTRY(IProfileParser2)
	DACOM_INTERFACE_ENTRY(IProfileParser)
	DACOM_INTERFACE_ENTRY2(IID_IProfileParser2,IProfileParser2)
	DACOM_INTERFACE_ENTRY2(IID_IProfileParser,IProfileParser)
	END_DACOM_MAP()


	GENRESULT init (PROFPARSEDESC2 * info) { return GR_OK; }

	/* IProfileParser methods */

	DACOM_DEFMETHOD(Initialize) (const C8 *fileName, ACCESS access)
	{
		return ProfileParser::Initialize(fileName, access);
	}

	virtual HANDLE __stdcall CreateSection (const C8 *sectionName, IProfileParser::CREATE_MODE mode)
	{
		return ProfileParser::CreateSection(sectionName, mode);
	}

	virtual BOOL32 __stdcall CloseSection (HANDLE hSection)
	{
		return ProfileParser::CloseSection(hSection);
	}

	virtual U32 __stdcall ReadProfileLine (HANDLE hSection, U32 lineNumber, C8 * buffer, U32 bufferSize)
	{
		return ProfileParser::ReadProfileLine(hSection, lineNumber, buffer, bufferSize);
	}

	virtual U32 __stdcall ReadKeyValue (HANDLE hSection, const C8 * keyName, C8 * buffer, U32 bufferSize)
	{
		return ProfileParser::ReadKeyValue(hSection, keyName, buffer, bufferSize);
	}

	/* IProfileParser2 methods */

	virtual GENRESULT __stdcall Initialize2 (const C8 *buffer, U32 bufferSize );

	virtual BOOL32 __stdcall EnumerateSections(IProfileCallback* callback, void* context);

	virtual BOOL32 __stdcall EnumerateKeys (IProfileCallback * callback, HANDLE hSection, void *context);
};
