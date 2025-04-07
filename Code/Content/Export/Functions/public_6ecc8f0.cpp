#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eccc20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ecc908 _public_6ecc908

PROC_DECLARE(0x6ecc8f0, internal_6ecc8f0, public_6ecc8f0);
extern "C" NAKED register_t __cdecl internal_6ecc8f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eccc20
        test byte ptr ss : [esp+8], 1
        je public_6ecc908
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ecc908 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecc8f0)
    }
}

#undef public_6ecc908
