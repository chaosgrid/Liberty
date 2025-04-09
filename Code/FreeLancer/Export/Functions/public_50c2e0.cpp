#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428fc0);
CLANG_FORWARD_PROC_SYMBOL(public_50c300);

#define public_50c2fa _public_50c2fa

PROC_DECLARE(0x50c2e0, internal_50c2e0, public_50c2e0);
extern "C" NAKED register_t __cdecl internal_50c2e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_50c300
        test byte ptr ss : [esp+8], 1
        je public_50c2fa
        push 0x30
        push esi
        call public_428fc0
        add esp, 8
        public_50c2fa : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50c2e0)
    }
}

#undef public_50c2fa
