#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220a60);

#define public_6220a6a _public_6220a6a

PROC_DECLARE(0x6220a60, internal_6220a60, public_6220a60);
extern "C" NAKED register_t __cdecl internal_6220a60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6220a6a
        xor eax, eax
        ret 
        public_6220a6a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6220a60)
    }
}

#undef public_6220a6a
