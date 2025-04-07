#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6da3700);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da3718 _public_6da3718

PROC_DECLARE(0x6da3700, internal_6da3700, public_6da3700);
extern "C" NAKED register_t __cdecl internal_6da3700()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6da2b10
        test byte ptr ss : [esp+8], 1
        je public_6da3718
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da3718 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da3700)
    }
}

#undef public_6da3718
