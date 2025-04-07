#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11550);

#define public_6d11558 _public_6d11558

PROC_DECLARE(0x6d11550, internal_6d11550, public_6d11550);
extern "C" NAKED register_t __cdecl internal_6d11550()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6d11558
        ret 
        public_6d11558 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6d11550)
    }
}

#undef public_6d11558
