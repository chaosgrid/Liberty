#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8120);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ec8118 _public_6ec8118

PROC_DECLARE(0x6ec8100, internal_6ec8100, public_6ec8100);
extern "C" NAKED register_t __cdecl internal_6ec8100()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ec8120
        test byte ptr ss : [esp+8], 1
        je public_6ec8118
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ec8118 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ec8100)
    }
}

#undef public_6ec8118
