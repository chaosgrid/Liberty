#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f8b90);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f8b88 _public_65f8b88

PROC_DECLARE(0x65f8b70, internal_65f8b70, public_65f8b70);
extern "C" NAKED register_t __cdecl internal_65f8b70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65f8b90
        test byte ptr ss : [esp+8], 1
        je public_65f8b88
        push esi
        call public_6600bb0
        add esp, 4
        public_65f8b88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65f8b70)
    }
}

#undef public_65f8b88
