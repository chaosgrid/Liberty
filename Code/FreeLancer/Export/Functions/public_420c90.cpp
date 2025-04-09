#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420c90);
CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_420ca8 _public_420ca8

PROC_DECLARE(0x420c90, internal_420c90, public_420c90);
extern "C" NAKED register_t __cdecl internal_420c90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_420cb0
        test byte ptr ss : [esp+8], 1
        je public_420ca8
        push esi
        call public_5b7e1d
        add esp, 4
        public_420ca8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x420c90)
    }
}

#undef public_420ca8
