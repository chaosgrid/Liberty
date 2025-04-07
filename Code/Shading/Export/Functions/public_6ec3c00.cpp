#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec3c00);

#define public_6ec3c08 _public_6ec3c08

PROC_DECLARE(0x6ec3c00, internal_6ec3c00, public_6ec3c00);
extern "C" NAKED register_t __cdecl internal_6ec3c00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ec3c08
        ret 
        public_6ec3c08 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ec3c00)
    }
}

#undef public_6ec3c08
