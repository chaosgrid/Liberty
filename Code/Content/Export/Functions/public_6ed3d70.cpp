#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3d70);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ed3d88 _public_6ed3d88

PROC_DECLARE(0x6ed3d70, internal_6ed3d70, public_6ed3d70);
extern "C" NAKED register_t __cdecl internal_6ed3d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6efd030
        test byte ptr ss : [esp+8], 1
        je public_6ed3d88
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ed3d88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ed3d70)
    }
}

#undef public_6ed3d88
