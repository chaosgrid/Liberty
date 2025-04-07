#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f867a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f86818 _public_6f86818

PROC_DECLARE(0x6f86800, internal_6f86800, public_6f86800);
extern "C" NAKED register_t __cdecl internal_6f86800()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f867a0
        test byte ptr ss : [esp+8], 1
        je public_6f86818
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f86818 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f86800)
    }
}

#undef public_6f86818
