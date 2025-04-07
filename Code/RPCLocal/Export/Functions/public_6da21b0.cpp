#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da21b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da21c3 _public_6da21c3

PROC_DECLARE(0x6da21b0, internal_6da21b0, public_6da21b0);
extern "C" NAKED register_t __cdecl internal_6da21b0()
{
    __asm
    {
        test byte ptr ss : [esp+4], 1
        push esi
        mov esi, ecx
        je public_6da21c3
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da21c3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da21b0)
    }
}

#undef public_6da21c3
