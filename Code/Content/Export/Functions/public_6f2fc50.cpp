#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fc50);

#define public_6f2fc58 _public_6f2fc58

PROC_DECLARE(0x6f2fc50, internal_6f2fc50, public_6f2fc50);
extern "C" NAKED register_t __cdecl internal_6f2fc50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f2fc58
        ret 
        public_6f2fc58 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x60F25DEB
        imul ecx
        sar edx, 9
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f2fc50)
    }
}

#undef public_6f2fc58
