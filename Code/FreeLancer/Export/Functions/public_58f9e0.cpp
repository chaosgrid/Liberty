#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_58f9e0);

#define public_58f9e8 _public_58f9e8

PROC_DECLARE(0x58f9e0, internal_58f9e0, public_58f9e0);
extern "C" NAKED register_t __cdecl internal_58f9e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_58f9e8
        ret 
        public_58f9e8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x58f9e0)
    }
}

#undef public_58f9e8
