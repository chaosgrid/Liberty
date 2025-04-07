#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59cf60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59ce18 _public_59ce18

PROC_DECLARE(0x59ce00, internal_59ce00, public_59ce00);
extern "C" NAKED register_t __cdecl internal_59ce00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59cf60
        test byte ptr ss : [esp+8], 1
        je public_59ce18
        push esi
        call public_5b7e1d
        add esp, 4
        public_59ce18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59ce00)
    }
}

#undef public_59ce18
