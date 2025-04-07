#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa5510);

#define public_6fa5518 _public_6fa5518

PROC_DECLARE(0x6fa5510, internal_6fa5510, public_6fa5510);
extern "C" NAKED register_t __cdecl internal_6fa5510()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6fa5518
        ret 
        public_6fa5518 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x88888889
        imul ecx
        add edx, ecx
        sar edx, 7
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6fa5510)
    }
}

#undef public_6fa5518
