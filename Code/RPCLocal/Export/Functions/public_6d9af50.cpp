#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da11e0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d9af68 _public_6d9af68

PROC_DECLARE(0x6d9af50, internal_6d9af50, public_6d9af50);
extern "C" NAKED register_t __cdecl internal_6d9af50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6da11e0
        test byte ptr ss : [esp+8], 1
        je public_6d9af68
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d9af68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d9af50)
    }
}

#undef public_6d9af68
