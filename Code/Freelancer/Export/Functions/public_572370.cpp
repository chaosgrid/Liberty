#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5725e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_572388 _public_572388

PROC_DECLARE(0x572370, internal_572370, public_572370);
extern "C" NAKED register_t __cdecl internal_572370()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5725e0
        test byte ptr ss : [esp+8], 1
        je public_572388
        push esi
        call public_5b7e1d
        add esp, 4
        public_572388 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x572370)
    }
}

#undef public_572388
