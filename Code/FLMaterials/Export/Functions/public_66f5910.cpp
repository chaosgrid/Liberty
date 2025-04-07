#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66f6ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66f5928 _public_66f5928

PROC_DECLARE(0x66f5910, internal_66f5910, public_66f5910);
extern "C" NAKED register_t __cdecl internal_66f5910()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_66f6ec0
        test byte ptr ss : [esp+8], 1
        je public_66f5928
        push esi
        call public_6700710
        add esp, 4
        public_66f5928 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66f5910)
    }
}

#undef public_66f5928
