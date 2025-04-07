#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f484d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f484c8 _public_6f484c8

PROC_DECLARE(0x6f484b0, internal_6f484b0, public_6f484b0);
extern "C" NAKED register_t __cdecl internal_6f484b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f484d0
        test byte ptr ss : [esp+8], 1
        je public_6f484c8
        push esi
        call public_6f57e26
        add esp, 4
        public_6f484c8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f484b0)
    }
}

#undef public_6f484c8
