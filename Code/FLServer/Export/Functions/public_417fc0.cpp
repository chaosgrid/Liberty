#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417ee0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_417fd8 _public_417fd8

PROC_DECLARE(0x417fc0, internal_417fc0, public_417fc0);
extern "C" NAKED register_t __cdecl internal_417fc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_417ee0
        test byte ptr ss : [esp+8], 1
        je public_417fd8
        push esi
        call public_418978
        add esp, 4
        public_417fd8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x417fc0)
    }
}

#undef public_417fd8
