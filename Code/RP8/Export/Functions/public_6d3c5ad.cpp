#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3c5c9);

#define public_6d3c5c3 _public_6d3c5c3

PROC_DECLARE(0x6d3c5ad, internal_6d3c5ad, public_6d3c5ad);
extern "C" NAKED register_t __cdecl internal_6d3c5ad()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3c5c9
        test byte ptr ss : [esp+8], 1
        je public_6d3c5c3
        push esi
        call public_6d2f249
        pop ecx
        public_6d3c5c3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3c5ad)
    }
}

#undef public_6d3c5c3
