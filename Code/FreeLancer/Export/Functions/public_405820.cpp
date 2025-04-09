#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_405820);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_405838 _public_405838

PROC_DECLARE(0x405820, internal_405820, public_405820);
extern "C" NAKED register_t __cdecl internal_405820()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4032a0
        test byte ptr ss : [esp+8], 1
        je public_405838
        push esi
        call public_5b7e1d
        add esp, 4
        public_405838 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x405820)
    }
}

#undef public_405838
