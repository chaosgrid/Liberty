#ifdef SEARCH_PATH_FILESYSTEM

#include "DAPath.h"
#include "TComponent.h"

#include <Windows.h>

extern ICOManager* DACOM;

GENRESULT DAPath::CreateInstance(DACOMDESC* descriptor, void** instance)
{
	GENRESULT result = GR_FILE_ERROR;
	int i;

	*instance = 0;
	for (i = 0; i < numSystems; i++)
		if (systems[i] != 0 && (result = systems[i]->CreateInstance(descriptor, instance)) == GR_OK)
			break;

	return result;
}

GENRESULT DAPath::SetPath(const C8* newpath)
{
	GENRESULT result = GR_INVALID_PARMS;
	char buffer[MAX_PATH];

	if (newpath == 0)
		goto Done;
	//
	// free the old path
	//
	reset();
	strncpy(path, newpath, MAX_PATH);
	switchchar_convert(path);
	memcpy(buffer, path, sizeof(buffer));

	numSystems = parse(buffer, systems);

	result = GR_OK;
Done:
	return result;
}

// find the ';' characters, create an array of pointers to each subpath
int DAPath::parse(char* buffer, COMPTR<IFileSystem>*& ptrs, int recurseCount)
{
	char* ptr;

	if ((ptr = strchr(buffer, ';')) != 0)
	{
		*ptr = 0;
		if (ptr == buffer)
			return parse(ptr + 1, ptrs, recurseCount);
		else
		{
			int i;
			i = parse(ptr + 1, ptrs, recurseCount + 1);
			createFileSystem(DACOM, buffer, ptrs[recurseCount]);
			return i;
		}
	}
	else // base case (no semicolons)
	{
		if (buffer[0])
			recurseCount++;

		if (recurseCount)
			ptrs = new COMPTR<IFileSystem>[recurseCount];

		if (buffer[0])
			createFileSystem(DACOM, buffer, ptrs[recurseCount - 1]);

		return recurseCount;
	}
}

bool DAPath::createFileSystem(IComponentFactory* factory, char* buffer, IFileSystem** resultFile)
{
	char* ptr = 0;
	bool result = false;
	DAFILEDESC fdesc = buffer;
	COMPTR<IFileSystem> file;

	*resultFile = 0;
	if (buffer[0] == '\\' && buffer[1] == '\\')   // network file descriptor     \\Arrakis\Dev
	{
		if (buffer[2] == '\\')
			goto Done;
		if ((ptr = strchr(buffer + 3, '\\')) == 0)
			goto Done;
		if (ptr[1] == '\\')
			goto Done;
		if ((ptr = strchr(ptr + 1, '\\')) != 0)
			*ptr++ = 0;
	}
	else
		if (isalpha(buffer[0]) && buffer[1] == ':')    //  d:'\'
		{
			if ((ptr = strchr(buffer + 3, '\\')) != 0)
				*ptr++ = 0;
		}
		else
			if ((ptr = strchr(buffer + 1, '\\')) != 0)      //   '\'
				*ptr++ = 0;

	if (factory->CreateInstance(&fdesc, file) != GR_OK)
		goto Done;
	if (ptr && ptr[0])
	{
		result = createFileSystem(file, ptr, resultFile);
	}
	else
	{
		*resultFile = file;
		file->AddRef();
		result = true;
	}

Done:
	return result;
}

U32 DAPath::GetPath(C8* buffer, U32 bufferSize) const
{
	bufferSize = __min(bufferSize, (U32)strlen(path) + 1);

	if (bufferSize > 0 && buffer)
	{
		memcpy(buffer, path, bufferSize);
		buffer[bufferSize - 1] = 0;
	}

	return bufferSize;
}

#endif // SEARCH_PATH_FILESYSTEM
