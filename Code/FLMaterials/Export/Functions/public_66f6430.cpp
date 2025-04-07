#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6450);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66f6448 _public_66f6448

PROC_DECLARE(0x66f6430, internal_66f6430, public_66f6430);
extern "C" NAKED register_t __cdecl internal_66f6430()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_66f6450
        test byte ptr ss : [esp+8], 1
        je public_66f6448
        push esi
        call public_6700710
        add esp, 4
        public_66f6448 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66f6430)
    }
}

#undef public_66f6448
