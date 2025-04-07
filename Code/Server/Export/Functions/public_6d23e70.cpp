#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d209f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23e90);

#define public_6d23e88 _public_6d23e88

PROC_DECLARE(0x6d23e70, internal_6d23e70, public_6d23e70);
extern "C" NAKED register_t __cdecl internal_6d23e70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d209f0
        test byte ptr ss : [esp+8], 1
        je public_6d23e88
        push esi
        call public_6d23e90
        add esp, 4
        public_6d23e88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d23e70)
    }
}

#undef public_6d23e88
