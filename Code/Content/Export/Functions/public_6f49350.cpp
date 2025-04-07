#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49350);

#define public_6f4935d _public_6f4935d

PROC_DECLARE(0x6f49350, internal_6f49350, public_6f49350);
extern "C" NAKED register_t __cdecl internal_6f49350()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC4]
        test edx, edx
        jne public_6f4935d
        xor eax, eax
        ret 
        public_6f4935d : nop
        mov eax, dword ptr ds : [ecx+0xC8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f49350)
    }
}

#undef public_6f4935d
