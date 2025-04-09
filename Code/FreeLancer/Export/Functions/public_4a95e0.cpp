#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a9600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4a95f8 _public_4a95f8

PROC_DECLARE(0x4a95e0, internal_4a95e0, public_4a95e0);
extern "C" NAKED register_t __cdecl internal_4a95e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4a9600
        test byte ptr ss : [esp+8], 1
        je public_4a95f8
        push esi
        call public_5b7e1d
        add esp, 4
        public_4a95f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4a95e0)
    }
}

#undef public_4a95f8
