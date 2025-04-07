#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb20);

#define public_623fb3a _public_623fb3a

PROC_DECLARE(0x623fb20, internal_623fb20, public_623fb20);
extern "C" NAKED register_t __cdecl internal_623fb20()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF27FDE7D
        jne public_623fb3a
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x48]
        xor eax, eax
        ret 0xC
        public_623fb3a : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623fb20)
    }
}

#undef public_623fb3a
