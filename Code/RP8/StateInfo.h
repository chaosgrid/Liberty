#pragma once
#ifndef __STATEINFO_H__
#define __STATEINFO_H__

/* ---------- headers */

#include <FLHook_st6.h>
#include <DAD3DTypes.h>

//#include "CachedMatrix.h"
//#include "CachedViewport.h"

/* ---------- constants */

/* ---------- definitions */

struct RPSTATEINFO
{
	const char* key_name;
	U32 enum_value;
	U32	ct_default_value;	// compile time default
	U32 rt_default_value;	// runtime default
	BYTE valid;

	bool is_valid(void)
	{
		return valid;
	}
};

typedef st6::map<U32, RPSTATEINFO> RenderStateArray;
typedef st6::map<U32, RPSTATEINFO> PipelineStateArray;
typedef st6::map<U32, RPSTATEINFO> TextureStageStateArray;
typedef st6::map<U32, RPSTATEINFO> AbilitiesArray;

/* ---------- prototypes */

/* ---------- globals */

/* ---------- inline code */

#endif // __STATEINFO_H__
