#pragma once
#ifndef __MANGLED_ASSERT_H__
#define __MANGLED_ASSERT_H__

/* ---------- headers */

/* ---------- inline code */

#ifndef mangled_assert

constexpr bool _mangled_assert(const char* a, const char* b)
{
	for (; *a || *b;)
	{
		if (*a++ != *b++)
		{
			return false;
		}
	}
	return true;
}

#ifdef __INTELLISENSE__
#define mangled_assert(mangled_name) static_assert("mangled_assert hidden")
#define function_assert(mangled_name) static_assert("function_assert hidden")
#else
#ifdef __clang__
#define mangled_assert(mangled_name); \
__pragma(clang diagnostic push); \
__pragma(clang diagnostic ignored "-Wmicrosoft-string-literal-from-predefined"); \
static_assert(_mangled_assert(mangled_name, __FUNCDNAME__), "incorrect mangled : " __FUNCDNAME__  " != " mangled_name); \
__pragma(clang diagnostic pop)
//#define function_assert(function_name); \
//__pragma(clang diagnostic push); \
//__pragma(clang diagnostic ignored "-Wmicrosoft-string-literal-from-predefined"); \
//static_assert(_mangled_assert(function_name, __FUNCTION__), "incorrect mangled : " __FUNCTION__  " != " function_name); \
//__pragma(clang diagnostic pop)
#define function_assert(function_name)
#else
#define mangled_assert(mangled_name) static_assert(_mangled_assert(mangled_name, __FUNCDNAME__), "incorrect mangled : " __FUNCDNAME__  " != " mangled_name)
#define function_assert(function_name)
#endif
#endif

#endif

#endif // __MANGLED_ASSERT_H__
