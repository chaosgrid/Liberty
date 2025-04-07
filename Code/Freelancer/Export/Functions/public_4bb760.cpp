#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bb780);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4bb778 _public_4bb778

PROC_DECLARE(0x4bb760, internal_4bb760, public_4bb760);
extern "C" NAKED register_t __cdecl internal_4bb760()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4bb780
        test byte ptr ss : [esp+8], 1
        je public_4bb778
        push esi
        call public_5b7e1d
        add esp, 4
        public_4bb778 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4bb760)
    }
}

#undef public_4bb778
