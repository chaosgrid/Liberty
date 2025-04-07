#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecba0);

#define public_6cecba8 _public_6cecba8

PROC_DECLARE(0x6cecba0, internal_6cecba0, public_6cecba0);
extern "C" NAKED register_t __cdecl internal_6cecba0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6cecba8
        ret 
        public_6cecba8 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x4BDA12F7
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6cecba0)
    }
}

#undef public_6cecba8
