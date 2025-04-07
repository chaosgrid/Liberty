#include "Content-PCH.h"


#define public_6f9939f _public_6f9939f

PROC_DECLARE(0x6f99390, internal_6f99390, public_6f99390);
extern "C" NAKED register_t __cdecl internal_6f99390()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6f9939f
        xor edx, edx
        test edx, edx
        sete al
        ret 
        public_6f9939f : nop
        mov ecx, dword ptr ds : [ecx+0x10]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f99390)
    }
}

#undef public_6f9939f
