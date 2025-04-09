#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_460170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4600a8 _public_4600a8

PROC_DECLARE(0x460090, internal_460090, public_460090);
extern "C" NAKED register_t __cdecl internal_460090()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_460170
        test byte ptr ss : [esp+8], 1
        je public_4600a8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4600a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x460090)
    }
}

#undef public_4600a8
