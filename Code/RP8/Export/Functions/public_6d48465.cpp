#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2be);
CLANG_FORWARD_PROC_SYMBOL(public_6d48465);

#define public_6d48471 _public_6d48471

PROC_DECLARE(0x6d48465, internal_6d48465, public_6d48465);
extern "C" NAKED register_t __cdecl internal_6d48465()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d48471
        jmp public_6d2f2be
        public_6d48471 : nop
        ret 
        UNREACHABLE_TRAP(0x6d48465)
    }
}

#undef public_6d48471
