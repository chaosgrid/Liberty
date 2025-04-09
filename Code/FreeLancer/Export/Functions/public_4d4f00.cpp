#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d4f00);
CLANG_FORWARD_PROC_SYMBOL(public_4d4f20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4d4f18 _public_4d4f18

PROC_DECLARE(0x4d4f00, internal_4d4f00, public_4d4f00);
extern "C" NAKED register_t __cdecl internal_4d4f00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4d4f20
        test byte ptr ss : [esp+8], 1
        je public_4d4f18
        push esi
        call public_5b7e1d
        add esp, 4
        public_4d4f18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d4f00)
    }
}

#undef public_4d4f18
