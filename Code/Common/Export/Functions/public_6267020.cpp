#include "Common-PCH.h"


#define public_6267033 _public_6267033

PROC_DECLARE(0x6267020, internal_6267020, public_6267020);
extern "C" NAKED register_t __cdecl internal_6267020()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6267033
        xor eax, eax
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        public_6267033 : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 1
        xor ecx, ecx
        test eax, eax
        sete cl
        mov al, cl
        ret 
        UNREACHABLE_TRAP(0x6267020)
    }
}

#undef public_6267033
