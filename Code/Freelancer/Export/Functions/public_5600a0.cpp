#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5600a0);
CLANG_FORWARD_PROC_SYMBOL(public_5600c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5600b8 _public_5600b8

PROC_DECLARE(0x5600a0, internal_5600a0, public_5600a0);
extern "C" NAKED register_t __cdecl internal_5600a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5600c0
        test byte ptr ss : [esp+8], 1
        je public_5600b8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5600b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5600a0)
    }
}

#undef public_5600b8
