#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6381eb0);

#define public_6381ef3 _public_6381ef3

PROC_DECLARE(0x6381eb0, internal_6381eb0, public_6381eb0);
extern "C" NAKED register_t __cdecl internal_6381eb0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 3
        jne public_6381ef3
        mov eax, dword ptr ss : [esp+8]
        fld qword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [ecx+0x10]
        fld qword ptr ds : [eax+0x10]
        fmul qword ptr ds : [ecx+8]
        fsubp 
        fstp qword ptr ds : [edx]
        fld qword ptr ds : [ecx+0x10]
        fmul qword ptr ds : [eax]
        fld qword ptr ds : [eax+0x10]
        fmul qword ptr ds : [ecx]
        fsubp 
        fchs 
        fstp qword ptr ds : [edx+8]
        fld qword ptr ds : [ecx+8]
        fmul qword ptr ds : [eax]
        fld qword ptr ds : [eax+8]
        fmul qword ptr ds : [ecx]
        fsubp 
        fstp qword ptr ds : [edx+0x10]
        public_6381ef3 : nop
        ret 
        UNREACHABLE_TRAP(0x6381eb0)
    }
}

#undef public_6381ef3
