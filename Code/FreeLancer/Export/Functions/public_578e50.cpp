#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_578e70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_578e68 _public_578e68

PROC_DECLARE(0x578e50, internal_578e50, public_578e50);
extern "C" NAKED register_t __cdecl internal_578e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_578e70
        test byte ptr ss : [esp+8], 1
        je public_578e68
        push esi
        call public_5b7e1d
        add esp, 4
        public_578e68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x578e50)
    }
}

#undef public_578e68
