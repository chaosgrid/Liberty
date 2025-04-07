#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d9e930);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da1148 _public_6da1148

PROC_DECLARE(0x6da1130, internal_6da1130, public_6da1130);
extern "C" NAKED register_t __cdecl internal_6da1130()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d9e930
        test byte ptr ss : [esp+8], 1
        je public_6da1148
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da1148 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da1130)
    }
}

#undef public_6da1148
