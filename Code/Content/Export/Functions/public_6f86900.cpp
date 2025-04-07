#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f86900);
CLANG_FORWARD_PROC_SYMBOL(public_6f86920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f86918 _public_6f86918

PROC_DECLARE(0x6f86900, internal_6f86900, public_6f86900);
extern "C" NAKED register_t __cdecl internal_6f86900()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f86920
        test byte ptr ss : [esp+8], 1
        je public_6f86918
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f86918 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f86900)
    }
}

#undef public_6f86918
