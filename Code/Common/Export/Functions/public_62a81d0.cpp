#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3d00);
CLANG_FORWARD_PROC_SYMBOL(public_62a81d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a81e8 _public_62a81e8

PROC_DECLARE(0x62a81d0, internal_62a81d0, public_62a81d0);
extern "C" NAKED register_t __cdecl internal_62a81d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62a3d00
        test byte ptr ss : [esp+8], 1
        je public_62a81e8
        push esi
        call public_6391d5a
        add esp, 4
        public_62a81e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a81d0)
    }
}

#undef public_62a81e8
