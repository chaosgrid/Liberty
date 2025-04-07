#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7d10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa66c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6fa66d8 _public_6fa66d8

PROC_DECLARE(0x6fa66c0, internal_6fa66c0, public_6fa66c0);
extern "C" NAKED register_t __cdecl internal_6fa66c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6eb7d10
        test byte ptr ss : [esp+8], 1
        je public_6fa66d8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6fa66d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6fa66c0)
    }
}

#undef public_6fa66d8
