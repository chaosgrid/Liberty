#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7f350);

#define public_6f7f358 _public_6f7f358

PROC_DECLARE(0x6f7f350, internal_6f7f350, public_6f7f350);
extern "C" NAKED register_t __cdecl internal_6f7f350()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f7f358
        ret 
        public_6f7f358 : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        sub ecx, eax
        mov eax, 0x2AAAAAAB
        imul ecx
        sar edx, 1
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f7f350)
    }
}

#undef public_6f7f358
