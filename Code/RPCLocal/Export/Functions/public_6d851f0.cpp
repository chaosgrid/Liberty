#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d851f0);

#define public_6d851fa _public_6d851fa

PROC_DECLARE(0x6d851f0, internal_6d851f0, public_6d851f0);
extern "C" NAKED register_t __cdecl internal_6d851f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d851fa
        xor eax, eax
        ret 
        public_6d851fa : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6d851f0)
    }
}

#undef public_6d851fa
