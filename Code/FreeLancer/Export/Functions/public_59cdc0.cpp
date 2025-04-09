#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ce50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59cdd8 _public_59cdd8

PROC_DECLARE(0x59cdc0, internal_59cdc0, public_59cdc0);
extern "C" NAKED register_t __cdecl internal_59cdc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59ce50
        test byte ptr ss : [esp+8], 1
        je public_59cdd8
        push esi
        call public_5b7e1d
        add esp, 4
        public_59cdd8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59cdc0)
    }
}

#undef public_59cdd8
