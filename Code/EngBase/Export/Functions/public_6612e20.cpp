#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e20);

#define public_6612e28 _public_6612e28

PROC_DECLARE(0x6612e20, internal_6612e20, public_6612e20);
extern "C" NAKED register_t __cdecl internal_6612e20()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6612e28
        ret 
        public_6612e28 : nop
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
        UNREACHABLE_TRAP(0x6612e20)
    }
}

#undef public_6612e28
