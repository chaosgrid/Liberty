#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344c30);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6344c28 _public_6344c28

PROC_DECLARE(0x6344c10, internal_6344c10, public_6344c10);
extern "C" NAKED register_t __cdecl internal_6344c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6344c30
        test byte ptr ss : [esp+8], 1
        je public_6344c28
        push esi
        call public_6391d5a
        add esp, 4
        public_6344c28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344c10)
    }
}

#undef public_6344c28
