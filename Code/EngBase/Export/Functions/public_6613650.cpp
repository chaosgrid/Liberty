#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6613650);

#define public_661365a _public_661365a

PROC_DECLARE(0x6613650, internal_6613650, public_6613650);
extern "C" NAKED register_t __cdecl internal_6613650()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_661365a
        xor eax, eax
        ret 
        public_661365a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6613650)
    }
}

#undef public_661365a
