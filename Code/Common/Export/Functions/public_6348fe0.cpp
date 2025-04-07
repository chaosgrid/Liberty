#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6348fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6349490);
CLANG_FORWARD_PROC_SYMBOL(public_63494f0);

#define public_6349018 _public_6349018
#define public_634901d _public_634901d

PROC_DECLARE(0x6348fe0, internal_6348fe0, public_6348fe0);
extern "C" NAKED register_t __cdecl internal_6348fe0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp word ptr ds : [eax+2], 0
        jbe public_634901d
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+0x15C]
        mov eax, dword ptr ds : [ecx]
        shl eax, 0x18
        cmp eax, 0x8000000
        jl public_6349018
        mov edx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax+0xC]
        push edx
        call public_6349490
        ret 4
        public_6349018 : nop
        call public_63494f0
        public_634901d : nop
        ret 4
        UNREACHABLE_TRAP(0x6348fe0)
    }
}

#undef public_6349018
#undef public_634901d
