#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4c6010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c6008 _public_4c6008

PROC_DECLARE(0x4c5ff0, internal_4c5ff0, public_4c5ff0);
extern "C" NAKED register_t __cdecl internal_4c5ff0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c6010
        test byte ptr ss : [esp+8], 1
        je public_4c6008
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c6008 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c5ff0)
    }
}

#undef public_4c6008
