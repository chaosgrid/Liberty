#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cf5b0);
CLANG_FORWARD_PROC_SYMBOL(public_4cf5d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4cf5c8 _public_4cf5c8

PROC_DECLARE(0x4cf5b0, internal_4cf5b0, public_4cf5b0);
extern "C" NAKED register_t __cdecl internal_4cf5b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4cf5d0
        test byte ptr ss : [esp+8], 1
        je public_4cf5c8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4cf5c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4cf5b0)
    }
}

#undef public_4cf5c8
