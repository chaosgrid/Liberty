#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579620);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_579618 _public_579618

PROC_DECLARE(0x579600, internal_579600, public_579600);
extern "C" NAKED register_t __cdecl internal_579600()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_579620
        test byte ptr ss : [esp+8], 1
        je public_579618
        push esi
        call public_5b7e1d
        add esp, 4
        public_579618 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x579600)
    }
}

#undef public_579618
