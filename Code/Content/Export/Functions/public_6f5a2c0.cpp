#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f592d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f5a2d8 _public_6f5a2d8

PROC_DECLARE(0x6f5a2c0, internal_6f5a2c0, public_6f5a2c0);
extern "C" NAKED register_t __cdecl internal_6f5a2c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6f592d0
        test byte ptr ss : [esp+8], 1
        je public_6f5a2d8
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6f5a2d8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f5a2c0)
    }
}

#undef public_6f5a2d8
