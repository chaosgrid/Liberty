#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_564168 _public_564168

PROC_DECLARE(0x564150, internal_564150, public_564150);
extern "C" NAKED register_t __cdecl internal_564150()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_564170
        test byte ptr ss : [esp+8], 1
        je public_564168
        push esi
        call public_5b7e1d
        add esp, 4
        public_564168 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x564150)
    }
}

#undef public_564168
