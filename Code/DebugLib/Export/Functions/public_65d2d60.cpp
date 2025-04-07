#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2dc0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d2d78 _public_65d2d78

PROC_DECLARE(0x65d2d60, internal_65d2d60, public_65d2d60);
extern "C" NAKED register_t __cdecl internal_65d2d60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d2dc0
        test byte ptr ss : [esp+8], 1
        je public_65d2d78
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d2d78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d2d60)
    }
}

#undef public_65d2d78
