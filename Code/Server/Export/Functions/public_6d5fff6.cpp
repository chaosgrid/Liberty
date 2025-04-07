#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60378);

#define public_6d6000c _public_6d6000c

PROC_DECLARE(0x6d5fff6, internal_6d5fff6, public_6d5fff6);
extern "C" NAKED register_t __cdecl internal_6d5fff6()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d60378
        test byte ptr ss : [esp+8], 1
        je public_6d6000c
        push esi
        call public_6d5ffb0
        pop ecx
        public_6d6000c : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d5fff6)
    }
}

#undef public_6d6000c
