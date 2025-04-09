#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4438a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_443898 _public_443898

PROC_DECLARE(0x443880, internal_443880, public_443880);
extern "C" NAKED register_t __cdecl internal_443880()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4438a0
        test byte ptr ss : [esp+8], 1
        je public_443898
        push esi
        call public_5b7e1d
        add esp, 4
        public_443898 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x443880)
    }
}

#undef public_443898
