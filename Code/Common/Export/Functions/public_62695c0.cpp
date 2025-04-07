#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62695c0);

#define public_62695ca _public_62695ca

PROC_DECLARE(0x62695c0, internal_62695c0, public_62695c0);
extern "C" NAKED register_t __cdecl internal_62695c0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_62695ca
        xor eax, eax
        ret 
        public_62695ca : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x62695c0)
    }
}

#undef public_62695ca
