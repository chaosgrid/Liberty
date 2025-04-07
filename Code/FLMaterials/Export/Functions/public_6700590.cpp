#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67005b0);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_67005a8 _public_67005a8

PROC_DECLARE(0x6700590, internal_6700590, public_6700590);
extern "C" NAKED register_t __cdecl internal_6700590()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_67005b0
        test byte ptr ss : [esp+8], 1
        je public_67005a8
        push esi
        call public_6700710
        add esp, 4
        public_67005a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6700590)
    }
}

#undef public_67005a8
