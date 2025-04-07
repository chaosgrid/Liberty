#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282da0);

#define public_6282da8 _public_6282da8

PROC_DECLARE(0x6282da0, internal_6282da0, public_6282da0);
extern "C" NAKED register_t __cdecl internal_6282da0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6282da8
        ret 
        public_6282da8 : nop
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
        UNREACHABLE_TRAP(0x6282da0)
    }
}

#undef public_6282da8
