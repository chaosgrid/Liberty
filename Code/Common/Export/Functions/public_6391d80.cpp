#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6392122);

#define public_6391d96 _public_6391d96

PROC_DECLARE(0x6391d80, internal_6391d80, public_6391d80);
extern "C" NAKED register_t __cdecl internal_6391d80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6392122
        test byte ptr ss : [esp+8], 1
        je public_6391d96
        push esi
        call public_6391d5a
        pop ecx
        public_6391d96 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6391d80)
    }
}

#undef public_6391d96
