#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66faad0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66faac8 _public_66faac8

PROC_DECLARE(0x66faab0, internal_66faab0, public_66faab0);
extern "C" NAKED register_t __cdecl internal_66faab0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_66faad0
        test byte ptr ss : [esp+8], 1
        je public_66faac8
        push esi
        call public_6700710
        add esp, 4
        public_66faac8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66faab0)
    }
}

#undef public_66faac8
