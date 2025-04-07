#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d30);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce5d48 _public_6ce5d48

PROC_DECLARE(0x6ce5d30, internal_6ce5d30, public_6ce5d30);
extern "C" NAKED register_t __cdecl internal_6ce5d30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d572a0
        test byte ptr ss : [esp+8], 1
        je public_6ce5d48
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ce5d48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ce5d30)
    }
}

#undef public_6ce5d48
