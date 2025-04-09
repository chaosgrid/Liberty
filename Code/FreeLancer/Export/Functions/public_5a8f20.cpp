#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a9040);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a8f3e _public_5a8f3e

PROC_DECLARE(0x5a8f20, internal_5a8f20, public_5a8f20);
extern "C" NAKED register_t __cdecl internal_5a8f20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a9040
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-4]
        je public_5a8f3e
        push eax
        call public_5b7e1d
        add esp, 4
        lea eax, ds:[esi-4]
        public_5a8f3e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a8f20)
    }
}

#undef public_5a8f3e
