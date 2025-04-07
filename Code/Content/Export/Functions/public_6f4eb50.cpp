#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f4eb50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f4eb68 _public_6f4eb68

PROC_DECLARE(0x6f4eb50, internal_6f4eb50, public_6f4eb50);
extern "C" NAKED register_t __cdecl internal_6f4eb50()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f4cf10
        test byte ptr ss : [esp+8], 1
        je public_6f4eb68
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f4eb68 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f4eb50)
    }
}

#undef public_6f4eb68
