#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d3bdb7);

#define public_6d3bd81 _public_6d3bd81

PROC_DECLARE(0x6d3bd6b, internal_6d3bd6b, public_6d3bd6b);
extern "C" NAKED register_t __cdecl internal_6d3bd6b()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d3bdb7
        test byte ptr ss : [esp+8], 1
        je public_6d3bd81
        push esi
        call public_6d2f249
        pop ecx
        public_6d3bd81 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3bd6b)
    }
}

#undef public_6d3bd81
