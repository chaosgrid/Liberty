#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428790);
CLANG_FORWARD_PROC_SYMBOL(public_428f80);

#define public_503435 _public_503435

PROC_DECLARE(0x503420, internal_503420, public_503420);
extern "C" NAKED register_t __cdecl internal_503420()
{
    __asm
    {
        push 0x64
        call public_428f80
        add esp, 4
        test eax, eax
        je public_503435
        mov ecx, eax
        jmp public_428790
        public_503435 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x503420)
    }
}

#undef public_503435
