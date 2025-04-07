#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f883e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f884ce _public_6f884ce

PROC_DECLARE(0x6f884b0, internal_6f884b0, public_6f884b0);
extern "C" NAKED register_t __cdecl internal_6f884b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f883e0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-4]
        je public_6f884ce
        push eax
        call public_6fa8fe0
        add esp, 4
        lea eax, ds:[esi-4]
        public_6f884ce : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f884b0)
    }
}

#undef public_6f884ce
