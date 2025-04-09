#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_595300);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_595318 _public_595318

PROC_DECLARE(0x595300, internal_595300, public_595300);
extern "C" NAKED register_t __cdecl internal_595300()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4dd9a0
        test byte ptr ss : [esp+8], 1
        je public_595318
        push esi
        call public_5b7e1d
        add esp, 4
        public_595318 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x595300)
    }
}

#undef public_595318
