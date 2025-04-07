#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63614a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6361528 _public_6361528

PROC_DECLARE(0x6361510, internal_6361510, public_6361510);
extern "C" NAKED register_t __cdecl internal_6361510()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_63614a0
        test byte ptr ss : [esp+8], 1
        je public_6361528
        push esi
        call public_6391d5a
        add esp, 4
        public_6361528 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6361510)
    }
}

#undef public_6361528
