#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4270c);

#define public_6d4271f _public_6d4271f

PROC_DECLARE(0x6d4270c, internal_6d4270c, public_6d4270c);
extern "C" NAKED register_t __cdecl internal_6d4270c()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d4271f
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d4271f
        mov eax, dword ptr ds : [eax+0xC]
        ret 
        public_6d4271f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d4270c)
    }
}

#undef public_6d4271f
