#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5680);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a60);

#define public_65c56f8 _public_65c56f8

PROC_DECLARE(0x65c56e0, internal_65c56e0, public_65c56e0);
extern "C" NAKED register_t __cdecl internal_65c56e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65c5680
        test byte ptr ss : [esp+8], 1
        je public_65c56f8
        push esi
        call public_65c6a60
        add esp, 4
        public_65c56f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65c56e0)
    }
}

#undef public_65c56f8
