#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a600);

#define public_626a60a _public_626a60a

PROC_DECLARE(0x626a600, internal_626a600, public_626a600);
extern "C" NAKED register_t __cdecl internal_626a600()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_626a60a
        xor eax, eax
        ret 
        public_626a60a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x626a600)
    }
}

#undef public_626a60a
