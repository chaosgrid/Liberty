#pragma once

#include "FileSys.h"
#include "BaseUTF.h"

#ifndef __UTF_H__
#define __UTF_H__

struct BaseUTF;

extern "C"
{
	READFILE_DEC BaseUTF* CreateUTF(void);
	READFILE_DEC void startupUTF(void);
	READFILE_DEC void shutdownUTF(void);
}

#endif // __UTF_H__
