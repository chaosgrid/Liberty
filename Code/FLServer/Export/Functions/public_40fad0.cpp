#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fc80);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40faee _public_40faee

PROC_DECLARE(0x40fad0, internal_40fad0, public_40fad0);
extern "C" NAKED register_t __cdecl internal_40fad0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40fc80
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-4]
        je public_40faee
        push eax
        call public_418978
        add esp, 4
        lea eax, ds:[esi-4]
        public_40faee : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40fad0)
    }
}

#undef public_40faee
