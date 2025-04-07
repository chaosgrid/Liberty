#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85340);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d84c58 _public_6d84c58

PROC_DECLARE(0x6d84c40, internal_6d84c40, public_6d84c40);
extern "C" NAKED register_t __cdecl internal_6d84c40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d85340
        test byte ptr ss : [esp+8], 1
        je public_6d84c58
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d84c58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d84c40)
    }
}

#undef public_6d84c58
