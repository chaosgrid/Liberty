#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6392300);

#define public_63922f8 _public_63922f8

PROC_DECLARE(0x63922e0, internal_63922e0, public_63922e0);
extern "C" NAKED register_t __cdecl internal_63922e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6392300
        test byte ptr ss : [esp+8], 1
        je public_63922f8
        push esi
        call public_6391d5a
        add esp, 4
        public_63922f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x63922e0)
    }
}

#undef public_63922f8
