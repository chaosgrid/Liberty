#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fa160);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66fa158 _public_66fa158

PROC_DECLARE(0x66fa140, internal_66fa140, public_66fa140);
extern "C" NAKED register_t __cdecl internal_66fa140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_66fa160
        test byte ptr ss : [esp+8], 1
        je public_66fa158
        push esi
        call public_6700710
        add esp, 4
        public_66fa158 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x66fa140)
    }
}

#undef public_66fa158
