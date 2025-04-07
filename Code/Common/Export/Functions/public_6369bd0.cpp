#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6369bd0);

#define public_6369bdb _public_6369bdb

PROC_DECLARE(0x6369bd0, internal_6369bd0, public_6369bd0);
extern "C" NAKED register_t __cdecl internal_6369bd0()
{
    __asm
    {
        test ecx, ecx
        je public_6369bdb
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_6369bdb : nop
        ret 
        UNREACHABLE_TRAP(0x6369bd0)
    }
}

#undef public_6369bdb
