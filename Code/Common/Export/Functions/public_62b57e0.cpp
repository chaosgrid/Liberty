#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b57e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62b57f8 _public_62b57f8

PROC_DECLARE(0x62b57e0, internal_62b57e0, public_62b57e0);
extern "C" NAKED register_t __cdecl internal_62b57e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62881d0
        test byte ptr ss : [esp+8], 1
        je public_62b57f8
        push esi
        call public_6391d5a
        add esp, 4
        public_62b57f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b57e0)
    }
}

#undef public_62b57f8
