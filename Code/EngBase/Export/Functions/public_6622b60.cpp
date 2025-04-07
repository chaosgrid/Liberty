#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6622b60);

#define public_6622b68 _public_6622b68

PROC_DECLARE(0x6622b60, internal_6622b60, public_6622b60);
extern "C" NAKED register_t __cdecl internal_6622b60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6622b68
        ret 
        public_6622b68 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6622b60)
    }
}

#undef public_6622b68
