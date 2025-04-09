#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2ee0);

#define public_4a2ee8 _public_4a2ee8

PROC_DECLARE(0x4a2ee0, internal_4a2ee0, public_4a2ee0);
extern "C" NAKED register_t __cdecl internal_4a2ee0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_4a2ee8
        ret 
        public_4a2ee8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x4a2ee0)
    }
}

#undef public_4a2ee8
