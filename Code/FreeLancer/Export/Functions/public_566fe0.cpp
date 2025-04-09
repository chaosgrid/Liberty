#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5661b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_566ff8 _public_566ff8

PROC_DECLARE(0x566fe0, internal_566fe0, public_566fe0);
extern "C" NAKED register_t __cdecl internal_566fe0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5661b0
        test byte ptr ss : [esp+8], 1
        je public_566ff8
        push esi
        call public_5b7e1d
        add esp, 4
        public_566ff8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x566fe0)
    }
}

#undef public_566ff8
