#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5686b0);
CLANG_FORWARD_PROC_SYMBOL(public_5af640);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5af658 _public_5af658

PROC_DECLARE(0x5af640, internal_5af640, public_5af640);
extern "C" NAKED register_t __cdecl internal_5af640()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5686b0
        test byte ptr ss : [esp+8], 1
        je public_5af658
        push esi
        call public_5b7e1d
        add esp, 4
        public_5af658 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5af640)
    }
}

#undef public_5af658
