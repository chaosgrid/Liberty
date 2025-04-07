#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40e9a8 _public_40e9a8

PROC_DECLARE(0x40e990, internal_40e990, public_40e990);
extern "C" NAKED register_t __cdecl internal_40e990()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40e9b0
        test byte ptr ss : [esp+8], 1
        je public_40e9a8
        push esi
        call public_418978
        add esp, 4
        public_40e9a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40e990)
    }
}

#undef public_40e9a8
