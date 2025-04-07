#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59ae60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59ae58 _public_59ae58

PROC_DECLARE(0x59ae40, internal_59ae40, public_59ae40);
extern "C" NAKED register_t __cdecl internal_59ae40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59ae60
        test byte ptr ss : [esp+8], 1
        je public_59ae58
        push esi
        call public_5b7e1d
        add esp, 4
        public_59ae58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59ae40)
    }
}

#undef public_59ae58
