#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d1930);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d1928 _public_65d1928

PROC_DECLARE(0x65d1910, internal_65d1910, public_65d1910);
extern "C" NAKED register_t __cdecl internal_65d1910()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_65d1930
        test byte ptr ss : [esp+8], 1
        je public_65d1928
        push esi
        call public_65d6cb8
        add esp, 4
        public_65d1928 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x65d1910)
    }
}

#undef public_65d1928
