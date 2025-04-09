#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a470);
CLANG_FORWARD_PROC_SYMBOL(public_45da00);

#define public_45a47d _public_45a47d

PROC_DECLARE(0x45a470, internal_45a470, public_45a470);
extern "C" NAKED register_t __cdecl internal_45a470()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d3f0]
        test ecx, ecx
        jne public_45a47d
        xor al, al
        ret 
        public_45a47d : nop
        jmp public_45da00
        UNREACHABLE_TRAP(0x45a470)
    }
}

#undef public_45a47d
