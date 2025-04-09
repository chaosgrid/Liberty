#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52d5a8 _public_52d5a8

PROC_DECLARE(0x52d590, internal_52d590, public_52d590);
extern "C" NAKED register_t __cdecl internal_52d590()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52d5b0
        test byte ptr ss : [esp+8], 1
        je public_52d5a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_52d5a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52d590)
    }
}

#undef public_52d5a8
