#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6344b28 _public_6344b28

PROC_DECLARE(0x6344b10, internal_6344b10, public_6344b10);
extern "C" NAKED register_t __cdecl internal_6344b10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6344aa0
        test byte ptr ss : [esp+8], 1
        je public_6344b28
        push esi
        call public_6391d5a
        add esp, 4
        public_6344b28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344b10)
    }
}

#undef public_6344b28
