#pragma once

#include "Filesys.h"

#ifndef __DOSFILESYSTEM_H__
#define __DOSFILESYSTEM_H__

extern "C"
{
	READFILE_DEC IFileSystem* CreateDOSFileSystem();
	READFILE_DEC void Register_DOSFileSystem();
}

#endif // __DOSFILESYSTEM_H__
