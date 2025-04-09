#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d740);

#define public_40d74a _public_40d74a

PROC_DECLARE(0x40d740, internal_40d740, public_40d740);
extern "C" NAKED register_t __cdecl internal_40d740()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_40d74a
        xor eax, eax
        ret 
        public_40d74a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x40d740)
    }
}

#undef public_40d74a
