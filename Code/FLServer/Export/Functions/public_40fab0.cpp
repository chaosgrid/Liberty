#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_41918e);

#define public_40fac8 _public_40fac8

PROC_DECLARE(0x40fab0, internal_40fab0, public_40fab0);
extern "C" NAKED register_t __cdecl internal_40fab0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41918e
        test byte ptr ss : [esp+8], 1
        je public_40fac8
        push esi
        call public_418978
        add esp, 4
        public_40fac8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40fab0)
    }
}

#undef public_40fac8
