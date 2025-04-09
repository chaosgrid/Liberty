#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446fb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_446fa8 _public_446fa8

PROC_DECLARE(0x446f90, internal_446f90, public_446f90);
extern "C" NAKED register_t __cdecl internal_446f90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_446fb0
        test byte ptr ss : [esp+8], 1
        je public_446fa8
        push esi
        call public_5b7e1d
        add esp, 4
        public_446fa8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x446f90)
    }
}

#undef public_446fa8
