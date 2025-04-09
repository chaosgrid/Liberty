#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d7a50);
CLANG_FORWARD_PROC_SYMBOL(public_4d7a70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4d7a68 _public_4d7a68

PROC_DECLARE(0x4d7a50, internal_4d7a50, public_4d7a50);
extern "C" NAKED register_t __cdecl internal_4d7a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4d7a70
        test byte ptr ss : [esp+8], 1
        je public_4d7a68
        push esi
        call public_5b7e1d
        add esp, 4
        public_4d7a68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4d7a50)
    }
}

#undef public_4d7a68
