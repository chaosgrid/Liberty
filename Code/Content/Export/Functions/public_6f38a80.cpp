#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38a80);

#define public_6f38a88 _public_6f38a88

PROC_DECLARE(0x6f38a80, internal_6f38a80, public_6f38a80);
extern "C" NAKED register_t __cdecl internal_6f38a80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f38a88
        ret 
        public_6f38a88 : nop
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
        UNREACHABLE_TRAP(0x6f38a80)
    }
}

#undef public_6f38a88
