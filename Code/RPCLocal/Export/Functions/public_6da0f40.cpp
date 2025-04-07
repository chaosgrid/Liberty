#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1250);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da0f58 _public_6da0f58

PROC_DECLARE(0x6da0f40, internal_6da0f40, public_6da0f40);
extern "C" NAKED register_t __cdecl internal_6da0f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6db1250
        test byte ptr ss : [esp+8], 1
        je public_6da0f58
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da0f58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da0f40)
    }
}

#undef public_6da0f58
