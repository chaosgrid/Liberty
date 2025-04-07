#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6344ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6344ce8 _public_6344ce8

PROC_DECLARE(0x6344cd0, internal_6344cd0, public_6344cd0);
extern "C" NAKED register_t __cdecl internal_6344cd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6344ae0
        test byte ptr ss : [esp+8], 1
        je public_6344ce8
        push esi
        call public_6391d5a
        add esp, 4
        public_6344ce8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344cd0)
    }
}

#undef public_6344ce8
