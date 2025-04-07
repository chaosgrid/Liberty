#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);
CLANG_FORWARD_PROC_SYMBOL(public_65d80af);

#define public_65d8022 _public_65d8022

PROC_DECLARE(0x65d800c, internal_65d800c, public_65d800c);
extern "C" NAKED register_t __cdecl internal_65d800c()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d80af
        test byte ptr ss : [esp+8], 1
        je public_65d8022
        push esi
        call public_65d6cb8
        pop ecx
        public_65d8022 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d800c)
    }
}

#undef public_65d8022
