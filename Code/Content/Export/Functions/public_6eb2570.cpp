#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb2570);

#define public_6eb2578 _public_6eb2578

PROC_DECLARE(0x6eb2570, internal_6eb2570, public_6eb2570);
extern "C" NAKED register_t __cdecl internal_6eb2570()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6eb2578
        ret 
        public_6eb2578 : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        sub ecx, eax
        mov eax, 0x66666667
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6eb2570)
    }
}

#undef public_6eb2578
