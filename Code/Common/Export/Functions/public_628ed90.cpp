#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628eda8 _public_628eda8

PROC_DECLARE(0x628ed90, internal_628ed90, public_628ed90);
extern "C" NAKED register_t __cdecl internal_628ed90()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634bca0
        test byte ptr ss : [esp+8], 1
        je public_628eda8
        push esi
        call public_6391d5a
        add esp, 4
        public_628eda8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628ed90)
    }
}

#undef public_628eda8
