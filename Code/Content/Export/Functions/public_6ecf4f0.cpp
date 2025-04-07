#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ecf508 _public_6ecf508

PROC_DECLARE(0x6ecf4f0, internal_6ecf4f0, public_6ecf4f0);
extern "C" NAKED register_t __cdecl internal_6ecf4f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ecc2e0
        test byte ptr ss : [esp+8], 1
        je public_6ecf508
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ecf508 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecf4f0)
    }
}

#undef public_6ecf508
