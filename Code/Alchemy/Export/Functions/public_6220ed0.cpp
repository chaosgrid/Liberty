#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220ed0);

#define public_6220eda _public_6220eda

PROC_DECLARE(0x6220ed0, internal_6220ed0, public_6220ed0);
extern "C" NAKED register_t __cdecl internal_6220ed0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6220eda
        xor eax, eax
        ret 
        public_6220eda : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6220ed0)
    }
}

#undef public_6220eda
