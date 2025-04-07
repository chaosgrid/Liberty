#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3762c);

#define public_6d3b7eb _public_6d3b7eb

PROC_DECLARE(0x6d3b7d5, internal_6d3b7d5, public_6d3b7d5);
extern "C" NAKED register_t __cdecl internal_6d3b7d5()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3762c
        test byte ptr ss : [esp+8], 1
        je public_6d3b7eb
        push esi
        call public_6d2f249
        pop ecx
        public_6d3b7eb : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3b7d5)
    }
}

#undef public_6d3b7eb
