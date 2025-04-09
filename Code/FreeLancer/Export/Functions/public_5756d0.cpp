#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5756d0);

#define public_5756d8 _public_5756d8

PROC_DECLARE(0x5756d0, internal_5756d0, public_5756d0);
extern "C" NAKED register_t __cdecl internal_5756d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_5756d8
        ret 
        public_5756d8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x5756d0)
    }
}

#undef public_5756d8
