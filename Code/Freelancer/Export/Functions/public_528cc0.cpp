#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f79c0);
CLANG_FORWARD_PROC_SYMBOL(public_528cf0);

#define public_528cdd _public_528cdd

PROC_DECLARE(0x528cc0, internal_528cc0, public_528cc0);
extern "C" NAKED register_t __cdecl internal_528cc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_528cf0
        test byte ptr ss : [esp+8], 1
        je public_528cdd
        push 0x90
        push esi
        call public_4f79c0
        add esp, 8
        public_528cdd : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x528cc0)
    }
}

#undef public_528cdd
