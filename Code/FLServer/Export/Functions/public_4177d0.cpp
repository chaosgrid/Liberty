#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177d0);

#define public_4177da _public_4177da

PROC_DECLARE(0x4177d0, internal_4177d0, public_4177d0);
extern "C" NAKED register_t __cdecl internal_4177d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_4177da
        xor eax, eax
        ret 
        public_4177da : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x4177d0)
    }
}

#undef public_4177da
