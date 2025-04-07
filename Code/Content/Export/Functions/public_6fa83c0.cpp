#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa83c0);

#define public_6fa83c8 _public_6fa83c8

PROC_DECLARE(0x6fa83c0, internal_6fa83c0, public_6fa83c0);
extern "C" NAKED register_t __cdecl internal_6fa83c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6fa83c8
        ret 
        public_6fa83c8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6fa83c0)
    }
}

#undef public_6fa83c8
