#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f05630);

#define public_6f05638 _public_6f05638

PROC_DECLARE(0x6f05630, internal_6f05630, public_6f05630);
extern "C" NAKED register_t __cdecl internal_6f05630()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f05638
        ret 
        public_6f05638 : nop
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
        UNREACHABLE_TRAP(0x6f05630)
    }
}

#undef public_6f05638
