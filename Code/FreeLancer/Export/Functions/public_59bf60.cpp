#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59bf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59bf78 _public_59bf78

PROC_DECLARE(0x59bf60, internal_59bf60, public_59bf60);
extern "C" NAKED register_t __cdecl internal_59bf60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_59bf80
        test byte ptr ss : [esp+8], 1
        je public_59bf78
        push esi
        call public_5b7e1d
        add esp, 4
        public_59bf78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x59bf60)
    }
}

#undef public_59bf78
