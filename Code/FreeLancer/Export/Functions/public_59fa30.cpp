#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59fa48 _public_59fa48

PROC_DECLARE(0x59fa30, internal_59fa30, public_59fa30);
extern "C" NAKED register_t __cdecl internal_59fa30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59fa50
        test byte ptr ss : [esp+8], 1
        je public_59fa48
        push esi
        call public_5b7e1d
        add esp, 4
        public_59fa48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59fa30)
    }
}

#undef public_59fa48
