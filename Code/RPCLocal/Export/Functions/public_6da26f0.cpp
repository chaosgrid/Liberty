#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da21d0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da2708 _public_6da2708

PROC_DECLARE(0x6da26f0, internal_6da26f0, public_6da26f0);
extern "C" NAKED register_t __cdecl internal_6da26f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6da21d0
        test byte ptr ss : [esp+8], 1
        je public_6da2708
        push esi
        call public_6db1dc2
        add esp, 4
        public_6da2708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6da26f0)
    }
}

#undef public_6da2708
