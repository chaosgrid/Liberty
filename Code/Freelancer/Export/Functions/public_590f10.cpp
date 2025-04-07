#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58e430);
CLANG_FORWARD_PROC_SYMBOL(public_590f10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_590f28 _public_590f28

PROC_DECLARE(0x590f10, internal_590f10, public_590f10);
extern "C" NAKED register_t __cdecl internal_590f10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_58e430
        test byte ptr ss : [esp+8], 1
        je public_590f28
        push esi
        call public_5b7e1d
        add esp, 4
        public_590f28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x590f10)
    }
}

#undef public_590f28
