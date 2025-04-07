#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ca4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62ca4b8 _public_62ca4b8

PROC_DECLARE(0x62ca4a0, internal_62ca4a0, public_62ca4a0);
extern "C" NAKED register_t __cdecl internal_62ca4a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62ca4c0
        test byte ptr ss : [esp+8], 1
        je public_62ca4b8
        push esi
        call public_6391d5a
        add esp, 4
        public_62ca4b8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ca4a0)
    }
}

#undef public_62ca4b8
