#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5af680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af698 _public_5af698

PROC_DECLARE(0x5af680, internal_5af680, public_5af680);
extern "C" NAKED register_t __cdecl internal_5af680()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_487c30
        test byte ptr ss : [esp+8], 1
        je public_5af698
        push esi
        call public_5b7e1d
        add esp, 4
        public_5af698 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5af680)
    }
}

#undef public_5af698
