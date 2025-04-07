#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d1c0);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4133f8 _public_4133f8

PROC_DECLARE(0x4133e0, internal_4133e0, public_4133e0);
extern "C" NAKED register_t __cdecl internal_4133e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_40d1c0
        test byte ptr ss : [esp+8], 1
        je public_4133f8
        push esi
        call public_418978
        add esp, 4
        public_4133f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4133e0)
    }
}

#undef public_4133f8
