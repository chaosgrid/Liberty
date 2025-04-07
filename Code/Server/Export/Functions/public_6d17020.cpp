#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d17020);
CLANG_FORWARD_PROC_SYMBOL(public_6d17080);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d17038 _public_6d17038

PROC_DECLARE(0x6d17020, internal_6d17020, public_6d17020);
extern "C" NAKED register_t __cdecl internal_6d17020()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d17080
        test byte ptr ss : [esp+8], 1
        je public_6d17038
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d17038 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d17020)
    }
}

#undef public_6d17038
