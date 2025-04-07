#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf3c0);

#define public_6ecf3ca _public_6ecf3ca

PROC_DECLARE(0x6ecf3c0, internal_6ecf3c0, public_6ecf3c0);
extern "C" NAKED register_t __cdecl internal_6ecf3c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6ecf3ca
        xor eax, eax
        ret 
        public_6ecf3ca : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6ecf3c0)
    }
}

#undef public_6ecf3ca
