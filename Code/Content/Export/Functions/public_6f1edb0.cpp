#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1edb0);

#define public_6f1edb8 _public_6f1edb8

PROC_DECLARE(0x6f1edb0, internal_6f1edb0, public_6f1edb0);
extern "C" NAKED register_t __cdecl internal_6f1edb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f1edb8
        ret 
        public_6f1edb8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f1edb0)
    }
}

#undef public_6f1edb8
