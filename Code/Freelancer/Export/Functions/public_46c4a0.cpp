#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46c4c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46c4b8 _public_46c4b8

PROC_DECLARE(0x46c4a0, internal_46c4a0, public_46c4a0);
extern "C" NAKED register_t __cdecl internal_46c4a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_46c4c0
        test byte ptr ss : [esp+8], 1
        je public_46c4b8
        push esi
        call public_5b7e1d
        add esp, 4
        public_46c4b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x46c4a0)
    }
}

#undef public_46c4b8
