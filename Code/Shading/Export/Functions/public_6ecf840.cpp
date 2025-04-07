#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf840);

#define public_6ecf84a _public_6ecf84a

PROC_DECLARE(0x6ecf840, internal_6ecf840, public_6ecf840);
extern "C" NAKED register_t __cdecl internal_6ecf840()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6ecf84a
        xor eax, eax
        ret 
        public_6ecf84a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6ecf840)
    }
}

#undef public_6ecf84a
