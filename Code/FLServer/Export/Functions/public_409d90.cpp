#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4185dc);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_409da8 _public_409da8

PROC_DECLARE(0x409d90, internal_409d90, public_409d90);
extern "C" NAKED register_t __cdecl internal_409d90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4185dc
        test byte ptr ss : [esp+8], 1
        je public_409da8
        push esi
        call public_418978
        add esp, 4
        public_409da8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x409d90)
    }
}

#undef public_409da8
