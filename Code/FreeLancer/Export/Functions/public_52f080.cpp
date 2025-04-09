#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428fc0);
CLANG_FORWARD_PROC_SYMBOL(public_52f0a0);

#define public_52f09a _public_52f09a

PROC_DECLARE(0x52f080, internal_52f080, public_52f080);
extern "C" NAKED register_t __cdecl internal_52f080()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52f0a0
        test byte ptr ss : [esp+8], 1
        je public_52f09a
        push 0x50
        push esi
        call public_428fc0
        add esp, 8
        public_52f09a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52f080)
    }
}

#undef public_52f09a
