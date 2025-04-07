#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d2dd0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d2d98 _public_65d2d98

PROC_DECLARE(0x65d2d80, internal_65d2d80, public_65d2d80);
extern "C" NAKED register_t __cdecl internal_65d2d80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d2dd0
        test byte ptr ss : [esp+8], 1
        je public_65d2d98
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d2d98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d2d80)
    }
}

#undef public_65d2d98
