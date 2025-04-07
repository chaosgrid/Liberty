#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30830);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e570);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f7e588 _public_6f7e588

PROC_DECLARE(0x6f7e570, internal_6f7e570, public_6f7e570);
extern "C" NAKED register_t __cdecl internal_6f7e570()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f30830
        test byte ptr ss : [esp+8], 1
        je public_6f7e588
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f7e588 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f7e570)
    }
}

#undef public_6f7e588
