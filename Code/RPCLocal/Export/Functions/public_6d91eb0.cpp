#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d91dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d91ec8 _public_6d91ec8

PROC_DECLARE(0x6d91eb0, internal_6d91eb0, public_6d91eb0);
extern "C" NAKED register_t __cdecl internal_6d91eb0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d91dd0
        test byte ptr ss : [esp+8], 1
        je public_6d91ec8
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d91ec8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d91eb0)
    }
}

#undef public_6d91ec8
