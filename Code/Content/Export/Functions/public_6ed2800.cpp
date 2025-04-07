#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2800);

#define public_6ed2808 _public_6ed2808

PROC_DECLARE(0x6ed2800, internal_6ed2800, public_6ed2800);
extern "C" NAKED register_t __cdecl internal_6ed2800()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ed2808
        ret 
        public_6ed2808 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ed2800)
    }
}

#undef public_6ed2808
