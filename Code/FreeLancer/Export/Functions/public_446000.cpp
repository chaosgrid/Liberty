#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_446018 _public_446018

PROC_DECLARE(0x446000, internal_446000, public_446000);
extern "C" NAKED register_t __cdecl internal_446000()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_446020
        test byte ptr ss : [esp+8], 1
        je public_446018
        push esi
        call public_5b7e1d
        add esp, 4
        public_446018 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x446000)
    }
}

#undef public_446018
