#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4027b0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4027a8 _public_4027a8

PROC_DECLARE(0x402790, internal_402790, public_402790);
extern "C" NAKED register_t __cdecl internal_402790()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4027b0
        test byte ptr ss : [esp+8], 1
        je public_4027a8
        push esi
        call public_418978
        add esp, 4
        public_4027a8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x402790)
    }
}

#undef public_4027a8
