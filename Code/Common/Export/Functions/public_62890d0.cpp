#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62890f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62890e8 _public_62890e8

PROC_DECLARE(0x62890d0, internal_62890d0, public_62890d0);
extern "C" NAKED register_t __cdecl internal_62890d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62890f0
        test byte ptr ss : [esp+8], 1
        je public_62890e8
        push esi
        call public_6391d5a
        add esp, 4
        public_62890e8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62890d0)
    }
}

#undef public_62890e8
