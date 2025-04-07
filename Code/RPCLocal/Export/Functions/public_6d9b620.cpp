#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b640);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b638 _public_6d9b638

PROC_DECLARE(0x6d9b620, internal_6d9b620, public_6d9b620);
extern "C" NAKED register_t __cdecl internal_6d9b620()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9b640
        test byte ptr ss : [esp+8], 1
        je public_6d9b638
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9b638 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9b620)
    }
}

#undef public_6d9b638
