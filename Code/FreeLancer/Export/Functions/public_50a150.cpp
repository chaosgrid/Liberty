#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50a170);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_50a168 _public_50a168

PROC_DECLARE(0x50a150, internal_50a150, public_50a150);
extern "C" NAKED register_t __cdecl internal_50a150()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_50a170
        test byte ptr ss : [esp+8], 1
        je public_50a168
        push esi
        call public_5b7e1d
        add esp, 4
        public_50a168 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50a150)
    }
}

#undef public_50a168
