#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3bbf0);

#define public_6f3bbfa _public_6f3bbfa

PROC_DECLARE(0x6f3bbf0, internal_6f3bbf0, public_6f3bbf0);
extern "C" NAKED register_t __cdecl internal_6f3bbf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f3bbfa
        xor eax, eax
        ret 
        public_6f3bbfa : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f3bbf0)
    }
}

#undef public_6f3bbfa
