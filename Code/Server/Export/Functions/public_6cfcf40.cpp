#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfd1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cfcf58 _public_6cfcf58

PROC_DECLARE(0x6cfcf40, internal_6cfcf40, public_6cfcf40);
extern "C" NAKED register_t __cdecl internal_6cfcf40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cfd1b0
        test byte ptr ss : [esp+8], 1
        je public_6cfcf58
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6cfcf58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfcf40)
    }
}

#undef public_6cfcf58
