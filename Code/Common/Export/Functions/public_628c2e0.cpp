#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289790);
CLANG_FORWARD_PROC_SYMBOL(public_628c2e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_628c2f8 _public_628c2f8

PROC_DECLARE(0x628c2e0, internal_628c2e0, public_628c2e0);
extern "C" NAKED register_t __cdecl internal_628c2e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6289790
        test byte ptr ss : [esp+8], 1
        je public_628c2f8
        push esi
        call public_6391d5a
        add esp, 4
        public_628c2f8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628c2e0)
    }
}

#undef public_628c2f8
