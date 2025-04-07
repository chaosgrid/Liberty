#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5220);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d5218 _public_65d5218

PROC_DECLARE(0x65d5200, internal_65d5200, public_65d5200);
extern "C" NAKED register_t __cdecl internal_65d5200()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d5220
        test byte ptr ss : [esp+8], 1
        je public_65d5218
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d5218 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d5200)
    }
}

#undef public_65d5218
