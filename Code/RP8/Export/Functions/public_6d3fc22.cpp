#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3fbe1);
CLANG_FORWARD_PROC_SYMBOL(public_6d3fc22);

#define public_6d3fc2c _public_6d3fc2c

PROC_DECLARE(0x6d3fc22, internal_6d3fc22, public_6d3fc22);
extern "C" NAKED register_t __cdecl internal_6d3fc22()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6d3fc2c
        jmp public_6d3fbe1
        public_6d3fc2c : nop
        ret 
        UNREACHABLE_TRAP(0x6d3fc22)
    }
}

#undef public_6d3fc2c
