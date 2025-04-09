#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_50c4b0);

#define public_50c435 _public_50c435

PROC_DECLARE(0x50c420, internal_50c420, public_50c420);
extern "C" NAKED register_t __cdecl internal_50c420()
{
    __asm
    {
        push 0x64
        call public_428f80
        add esp, 4
        test eax, eax
        je public_50c435
        mov ecx, eax
        jmp public_50c4b0
        public_50c435 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x50c420)
    }
}

#undef public_50c435
