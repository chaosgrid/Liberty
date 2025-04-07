#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f34680);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f33d18 _public_6f33d18

PROC_DECLARE(0x6f33d00, internal_6f33d00, public_6f33d00);
extern "C" NAKED register_t __cdecl internal_6f33d00()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f34680
        test byte ptr ss : [esp+8], 1
        je public_6f33d18
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f33d18 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f33d00)
    }
}

#undef public_6f33d18
