#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428fc0);
CLANG_FORWARD_PROC_SYMBOL(public_50c540);

#define public_50c53a _public_50c53a

PROC_DECLARE(0x50c520, internal_50c520, public_50c520);
extern "C" NAKED register_t __cdecl internal_50c520()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_50c540
        test byte ptr ss : [esp+8], 1
        je public_50c53a
        push 0x64
        push esi
        call public_428fc0
        add esp, 8
        public_50c53a : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x50c520)
    }
}

#undef public_50c53a
