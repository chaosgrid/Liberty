#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad5b0);

#define public_5ad5b8 _public_5ad5b8

PROC_DECLARE(0x5ad5b0, internal_5ad5b0, public_5ad5b0);
extern "C" NAKED register_t __cdecl internal_5ad5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_5ad5b8
        ret 
        public_5ad5b8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0xD20D20D3
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x5ad5b0)
    }
}

#undef public_5ad5b8
