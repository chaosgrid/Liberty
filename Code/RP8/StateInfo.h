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

	RPSTATEINFO(U32 _e = 0, const char* _k = NULL, U32 _ct = 0, U32 _rt = 0, bool valid = false)
	{
		set(_e, _k, _ct, _rt, valid);
	}

	RPSTATEINFO(const RPSTATEINFO& si)
	{
		operator=(si);
	}

	RPSTATEINFO& operator=(const RPSTATEINFO& si)
	{
		enum_value = si.enum_value;
		key_name = si.key_name;
		ct_default_value = si.ct_default_value;
		rt_default_value = si.rt_default_value;
		valid = si.valid;
		return *this;
	}

	const char* key_name;
	U32 enum_value;
	U32	ct_default_value;	// compile time default
	U32 rt_default_value;	// runtime default
	bool valid;

	bool is_valid(void)
	{
		return valid;
	}

	void set(U32 _e, const char* _k, U32 _ct, U32 _rt, bool _valid)
	{
		enum_value = _e;
		key_name = _k;
		ct_default_value = _ct;
		rt_default_value = _rt;
		valid = _valid;
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
