#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b1a0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b198 _public_6d9b198

PROC_DECLARE(0x6d9b180, internal_6d9b180, public_6d9b180);
extern "C" NAKED register_t __cdecl internal_6d9b180()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9b1a0
        test byte ptr ss : [esp+8], 1
        je public_6d9b198
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9b198 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9b180)
    }
}

#undef public_6d9b198
