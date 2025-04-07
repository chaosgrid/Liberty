#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d10c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d10b8 _public_65d10b8

PROC_DECLARE(0x65d10a0, internal_65d10a0, public_65d10a0);
extern "C" NAKED register_t __cdecl internal_65d10a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d10c0
        test byte ptr ss : [esp+8], 1
        je public_65d10b8
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d10b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d10a0)
    }
}

#undef public_65d10b8
