#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_456ee0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_456ed8 _public_456ed8

PROC_DECLARE(0x456ec0, internal_456ec0, public_456ec0);
extern "C" NAKED register_t __cdecl internal_456ec0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_456ee0
        test byte ptr ss : [esp+8], 1
        je public_456ed8
        push esi
        call public_5b7e1d
        add esp, 4
        public_456ed8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x456ec0)
    }
}

#undef public_456ed8
