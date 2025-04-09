#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8c20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c8c18 _public_4c8c18

PROC_DECLARE(0x4c8c00, internal_4c8c00, public_4c8c00);
extern "C" NAKED register_t __cdecl internal_4c8c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c8c20
        test byte ptr ss : [esp+8], 1
        je public_4c8c18
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c8c18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c8c00)
    }
}

#undef public_4c8c18
