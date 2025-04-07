#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f06840);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f07c28 _public_6f07c28

PROC_DECLARE(0x6f07c10, internal_6f07c10, public_6f07c10);
extern "C" NAKED register_t __cdecl internal_6f07c10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f06840
        test byte ptr ss : [esp+8], 1
        je public_6f07c28
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f07c28 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f07c10)
    }
}

#undef public_6f07c28
