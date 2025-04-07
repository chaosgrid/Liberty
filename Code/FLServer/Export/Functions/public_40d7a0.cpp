#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d7c0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_40d7b8 _public_40d7b8

PROC_DECLARE(0x40d7a0, internal_40d7a0, public_40d7a0);
extern "C" NAKED register_t __cdecl internal_40d7a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40d7c0
        test byte ptr ss : [esp+8], 1
        je public_40d7b8
        push esi
        call public_418978
        add esp, 4
        public_40d7b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40d7a0)
    }
}

#undef public_40d7b8
