#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ff0d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ff088 _public_4ff088

PROC_DECLARE(0x4ff070, internal_4ff070, public_4ff070);
extern "C" NAKED register_t __cdecl internal_4ff070()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4ff0d0
        test byte ptr ss : [esp+8], 1
        je public_4ff088
        push esi
        call public_5b7e1d
        add esp, 4
        public_4ff088 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4ff070)
    }
}

#undef public_4ff088
