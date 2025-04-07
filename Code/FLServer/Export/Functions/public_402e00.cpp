#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41857c);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_402e18 _public_402e18

PROC_DECLARE(0x402e00, internal_402e00, public_402e00);
extern "C" NAKED register_t __cdecl internal_402e00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_41857c
        test byte ptr ss : [esp+8], 1
        je public_402e18
        push esi
        call public_418978
        add esp, 4
        public_402e18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x402e00)
    }
}

#undef public_402e18
