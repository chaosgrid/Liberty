#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23de0);

#define public_6f23dea _public_6f23dea

PROC_DECLARE(0x6f23de0, internal_6f23de0, public_6f23de0);
extern "C" NAKED register_t __cdecl internal_6f23de0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f23dea
        xor eax, eax
        ret 
        public_6f23dea : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f23de0)
    }
}

#undef public_6f23dea
