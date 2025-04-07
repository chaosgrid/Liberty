#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f59450);

#define public_6f59458 _public_6f59458

PROC_DECLARE(0x6f59450, internal_6f59450, public_6f59450);
extern "C" NAKED register_t __cdecl internal_6f59450()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jne public_6f59458
        ret 
        public_6f59458 : nop
        mov ecx, dword ptr ds : [ecx+0x10]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f59450)
    }
}

#undef public_6f59458
