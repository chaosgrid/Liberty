#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f0ed00);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f0e788 _public_6f0e788

PROC_DECLARE(0x6f0e770, internal_6f0e770, public_6f0e770);
extern "C" NAKED register_t __cdecl internal_6f0e770()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f0ed00
        test byte ptr ss : [esp+8], 1
        je public_6f0e788
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f0e788 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f0e770)
    }
}

#undef public_6f0e788
