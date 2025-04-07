#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a620);

#define public_626a62a _public_626a62a

PROC_DECLARE(0x626a620, internal_626a620, public_626a620);
extern "C" NAKED register_t __cdecl internal_626a620()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_626a62a
        xor eax, eax
        ret 
        public_626a62a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x626a620)
    }
}

#undef public_626a62a
