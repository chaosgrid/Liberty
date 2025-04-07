#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d97b90);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d98658 _public_6d98658

PROC_DECLARE(0x6d98640, internal_6d98640, public_6d98640);
extern "C" NAKED register_t __cdecl internal_6d98640()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d97b90
        test byte ptr ss : [esp+8], 1
        je public_6d98658
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d98658 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d98640)
    }
}

#undef public_6d98658
