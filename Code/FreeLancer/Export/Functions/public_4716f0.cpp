#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46fa50);
CLANG_FORWARD_PROC_SYMBOL(public_4716f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_471708 _public_471708

PROC_DECLARE(0x4716f0, internal_4716f0, public_4716f0);
extern "C" NAKED register_t __cdecl internal_4716f0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_46fa50
        test byte ptr ss : [esp+8], 1
        je public_471708
        push esi
        call public_5b7e1d
        add esp, 4
        public_471708 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4716f0)
    }
}

#undef public_471708
