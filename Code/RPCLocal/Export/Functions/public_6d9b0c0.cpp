#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9b0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9b0d8 _public_6d9b0d8

PROC_DECLARE(0x6d9b0c0, internal_6d9b0c0, public_6d9b0c0);
extern "C" NAKED register_t __cdecl internal_6d9b0c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9b0e0
        test byte ptr ss : [esp+8], 1
        je public_6d9b0d8
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9b0d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9b0c0)
    }
}

#undef public_6d9b0d8
