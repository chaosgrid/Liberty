#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f713a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f71720);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f71738 _public_6f71738

PROC_DECLARE(0x6f71720, internal_6f71720, public_6f71720);
extern "C" NAKED register_t __cdecl internal_6f71720()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f713a0
        test byte ptr ss : [esp+8], 1
        je public_6f71738
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f71738 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f71720)
    }
}

#undef public_6f71738
