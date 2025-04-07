#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d99d40);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d99d88 _public_6d99d88

PROC_DECLARE(0x6d99d70, internal_6d99d70, public_6d99d70);
extern "C" NAKED register_t __cdecl internal_6d99d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d99d40
        test byte ptr ss : [esp+8], 1
        je public_6d99d88
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d99d88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d99d70)
    }
}

#undef public_6d99d88
