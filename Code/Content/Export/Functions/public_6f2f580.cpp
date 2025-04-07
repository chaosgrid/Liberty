#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29630);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f580);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2f598 _public_6f2f598

PROC_DECLARE(0x6f2f580, internal_6f2f580, public_6f2f580);
extern "C" NAKED register_t __cdecl internal_6f2f580()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f29630
        test byte ptr ss : [esp+8], 1
        je public_6f2f598
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f2f598 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f2f580)
    }
}

#undef public_6f2f598
