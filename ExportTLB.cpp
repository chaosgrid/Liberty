#include <Windows.h>
#include <Shlwapi.h>
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#pragma comment(lib, "Shlwapi.lib")
#include <assert.h>
#include <cassert>

#pragma warning( push )
#pragma warning( disable : 6255 )
#pragma warning( disable : 6386 )

#define ERR_OK 0
#define ERR_INVALID_CMD_LINE 1
#define ERR_FAILED_DLL_LOAD 2
#define ERR_TYPELIB_NOT_FOUND 3
#define ERR_FAILED_RESOURCE_LOAD 4
#define ERR_FAILED_RESOURCE_LOCK 5
#define ERR_FAILED_DLL_PATH_PARSE 6

int wmain(int argc, wchar_t* argv[])
{
	wchar_t* executablePath = argv[0];

	// Get the file name without extension
	wchar_t executableName[_MAX_FNAME];
	wchar_t executableExtension[_MAX_EXT];
	_wsplitpath_s(
		executablePath,
		NULL,
		0,
		NULL,
		0,
		executableName,
		_countof(executableName),
		executableExtension,
		_countof(executableExtension));

	if (argc < 2)
	{
		wprintf(L"Usage: %s <dllPath> [tlbPath]\n", executableName);
		return ERR_INVALID_CMD_LINE;
	}

	wchar_t* dllPath = argv[1];

	HMODULE hModule = LoadLibraryW(dllPath);
	HGLOBAL hResData = NULL;

	if (hModule == NULL)
	{
		// Failed to load the DLL
		wprintf(L"Failed to load the DLL.\n");
		return ERR_FAILED_DLL_LOAD;
	}

	HRSRC hResInfo = FindResourceW(hModule, MAKEINTRESOURCEW(1), L"TYPELIB"); // Assuming ID 1 for TYPELIB
	if (hResInfo == NULL)
	{
		// Resource not found
		wprintf(L"TYPELIB resource not found.\n");
		return ERR_TYPELIB_NOT_FOUND;
	}

	hResData = LoadResource(hModule, hResInfo);
	if (hResData == NULL)
	{
		wprintf(L"Failed to load resource.\n");
		return ERR_FAILED_RESOURCE_LOAD;
	}

	LPVOID hResLock = LockResource(hResData);
	if (hResLock == NULL)
	{
		wprintf(L"Failed to lock resource.\n");
		return ERR_FAILED_RESOURCE_LOCK;
	}

	DWORD size = SizeofResource(hModule, hResInfo);

	int result = ERR_OK;

	wchar_t* tlbPath = nullptr;
	if (argc >= 3)
	{
		tlbPath = argv[2];
	}
	else
	{
		DWORD fullPathLen = GetFullPathNameW(dllPath, 0, NULL, NULL);
		if (fullPathLen == 0)
		{
			wprintf(L"Failed to retrieve dll full path.\n");
			result = ERR_FAILED_DLL_PATH_PARSE;
			goto cleanup;
		}

		wchar_t* pDLLFullPathBuffer = (wchar_t*)alloca((fullPathLen + 1) * sizeof(wchar_t));

		LPWSTR pFilePart = nullptr;
		if (GetFullPathNameW(dllPath, fullPathLen, pDLLFullPathBuffer, &pFilePart) == 0)
		{
			wprintf(L"Failed to retrieve full path.\n");
			result = 4;
			goto cleanup;
		}

		size_t fileNameBufferLength = wcslen(pFilePart) + 1;
		wchar_t* pFileName = (wchar_t*)alloca(fileNameBufferLength * sizeof(wchar_t));
		wcscpy_s(pFileName, fileNameBufferLength, pFilePart);

		PathRemoveExtensionW(pFileName);
		PathRemoveFileSpecW(pDLLFullPathBuffer);

		// Change the extension to .tlb
		
		const wchar_t* pFormat = L"%s\\%s.tlb";
		int requiredSize = _scwprintf(pFormat, pDLLFullPathBuffer, pFileName);
		tlbPath = (wchar_t*)alloca((requiredSize + 1) * sizeof(wchar_t));
		_snwprintf_s(tlbPath, requiredSize + 1, requiredSize, pFormat, pDLLFullPathBuffer, pFileName);
	}

	{
		// Write bytes to file
		FILE* filePtr;
		errno_t error = _wfopen_s(&filePtr, tlbPath, L"wb");
		if (filePtr != NULL)
		{
			fwrite(hResLock, 1, size, filePtr);
			fclose(filePtr);
			wprintf(L"Successfully exported %s.\n", tlbPath);
		}
		else
		{
			wprintf(L"Failed to write to file %s reason:%i.\n", tlbPath, error);
			result = 8;
			goto cleanup;
		}
	}
	
cleanup:
	UnlockResource(hResData);

	// Free the library handle
	FreeLibrary(hModule);

	return result;
}

#pragma warning( pop )
