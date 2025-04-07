#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361f80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6361ef8 _public_6361ef8

PROC_DECLARE(0x6361ee0, internal_6361ee0, public_6361ee0);
extern "C" NAKED register_t __cdecl internal_6361ee0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6361f80
        test byte ptr ss : [esp+8], 1
        je public_6361ef8
        push esi
        call public_6391d5a
        add esp, 4
        public_6361ef8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361ee0)
    }
}

#undef public_6361ef8
