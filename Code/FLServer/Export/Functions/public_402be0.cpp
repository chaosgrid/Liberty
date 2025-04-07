#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4188fa);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_402bf8 _public_402bf8

PROC_DECLARE(0x402be0, internal_402be0, public_402be0);
extern "C" NAKED register_t __cdecl internal_402be0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4188fa
        test byte ptr ss : [esp+8], 1
        je public_402bf8
        push esi
        call public_418978
        add esp, 4
        public_402bf8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x402be0)
    }
}

#undef public_402bf8
