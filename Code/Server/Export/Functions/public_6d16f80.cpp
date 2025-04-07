#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16f80);
CLANG_FORWARD_PROC_SYMBOL(public_6d17070);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d16f98 _public_6d16f98

PROC_DECLARE(0x6d16f80, internal_6d16f80, public_6d16f80);
extern "C" NAKED register_t __cdecl internal_6d16f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d17070
        test byte ptr ss : [esp+8], 1
        je public_6d16f98
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d16f98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d16f80)
    }
}

#undef public_6d16f98
