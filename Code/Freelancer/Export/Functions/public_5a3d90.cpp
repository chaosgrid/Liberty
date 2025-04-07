#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3db0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a3da8 _public_5a3da8

PROC_DECLARE(0x5a3d90, internal_5a3d90, public_5a3d90);
extern "C" NAKED register_t __cdecl internal_5a3d90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a3db0
        test byte ptr ss : [esp+8], 1
        je public_5a3da8
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a3da8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a3d90)
    }
}

#undef public_5a3da8
