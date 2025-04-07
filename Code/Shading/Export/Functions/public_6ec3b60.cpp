#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3b60);

#define public_6ec3b68 _public_6ec3b68

PROC_DECLARE(0x6ec3b60, internal_6ec3b60, public_6ec3b60);
extern "C" NAKED register_t __cdecl internal_6ec3b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec3b68
        ret 
        public_6ec3b68 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ec3b60)
    }
}

#undef public_6ec3b68
