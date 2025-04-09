#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428f80);
CLANG_FORWARD_PROC_SYMBOL(public_429040);

#define public_513478 _public_513478

PROC_DECLARE(0x513460, internal_513460, public_513460);
extern "C" NAKED register_t __cdecl internal_513460()
{
    __asm
    {
        push 0x30
        call public_428f80
        add esp, 4
        test eax, eax
        je public_513478
        push 1
        mov ecx, eax
        call public_429040
        ret 
        public_513478 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x513460)
    }
}

#undef public_513478
