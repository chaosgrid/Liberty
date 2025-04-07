#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedfe0);

#define public_6eedfe8 _public_6eedfe8

PROC_DECLARE(0x6eedfe0, internal_6eedfe0, public_6eedfe0);
extern "C" NAKED register_t __cdecl internal_6eedfe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eedfe8
        ret 
        public_6eedfe8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 2
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6eedfe0)
    }
}

#undef public_6eedfe8
