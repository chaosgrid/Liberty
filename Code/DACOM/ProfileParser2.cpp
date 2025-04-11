#include "DACOM.h"
#include "ProfileParser2.h"

IComponentFactory* CreateProfileParserFactory2(void)
{
	return new DAComponentFactory2<DAComponentAggregate<ProfileParser2>, PROFPARSEDESC2>(IID_IProfileParser2);
}

GENRESULT ProfileParser2::Initialize2(const C8* buffer, U32 bufferSize)
{
	return Initialize(buffer, ACCESS(bufferSize | 0x80000000));
}

BOOL32 ProfileParser2::EnumerateSections(IProfileCallback* callback, void* context)
{
	BOOL32 result = 0;
	const char* buffer = fileBuffer;
	const char* name;

	if (callback == 0 || fileBuffer == 0)
		goto Done;

	result++;
	buffer = getSection(buffer, 1);
	while (result && buffer)
	{
		name = buffer + strlen(buffer) + 1;	// name -> string to the right of the [section]
		result = callback->ProfileCallback(this, buffer, name, context);
		buffer = getSection(buffer, 1);
	}

Done:
	return result;
}

BOOL32 ProfileParser2::EnumerateKeys(IProfileCallback* callback, HANDLE hSection, void* context)
{
	U32 result = 0;
	const char* tmp, * tmp2, * tmp3;
	char name[256];
	char value[256];
	int len;

	tmp = fileBuffer + ((U32)hSection);

	while ((tmp = getLine(tmp, 1)) != 0)
	{
		if ((tmp2 = strchr(tmp, '=')) != 0)
		{
			tmp3 = tmp2--;
			while (tmp2 >= tmp)
			{
				// make sure last character of tmp[] is a letter,number,or underscore
				if (__iscsym(*tmp2))
					break;
				tmp2--;
			}

			// tmp2 -> last char of keyName
			if (tmp2 >= tmp)
			{
				len = tmp2 - tmp + 1;
				len = __min(255, len);
				memcpy(name, tmp, len);
				name[len] = 0;

				// elliminate newline and commented lines
				if (strchr(name, ';') == 0 && strchr(name, '\n') == 0)
				{
					do
					{
						tmp3++;
					} while (*tmp3 == ' ');

					if ((tmp2 = strchr(tmp3, '\n')) != 0)
					{
						if (tmp2[-1] == '\r')
							tmp2--;	// get rid of extra char
					}
					else
					{
						tmp2 = tmp3 + strlen(tmp2);
					}

					len = tmp2 - tmp3;
					len = __min(255, len);
					memcpy(value, tmp3, len);
					value[len] = 0;

					if ((result = callback->ProfileCallback(this, name, value, context)) == 0)
						break;
				}
			}
		}
	}

	return result;
}
