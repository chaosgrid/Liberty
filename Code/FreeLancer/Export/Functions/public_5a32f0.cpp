#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3310);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a3308 _public_5a3308

PROC_DECLARE(0x5a32f0, internal_5a32f0, public_5a32f0);
extern "C" NAKED register_t __cdecl internal_5a32f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a3310
        test byte ptr ss : [esp+8], 1
        je public_5a3308
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a3308 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a32f0)
    }
}

#undef public_5a3308
