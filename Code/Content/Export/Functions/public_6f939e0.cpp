#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f939e0);

#define public_6f939e8 _public_6f939e8

PROC_DECLARE(0x6f939e0, internal_6f939e0, public_6f939e0);
extern "C" NAKED register_t __cdecl internal_6f939e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f939e8
        ret 
        public_6f939e8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f939e0)
    }
}

#undef public_6f939e8
