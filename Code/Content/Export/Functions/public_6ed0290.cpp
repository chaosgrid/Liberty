#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0290);

#define public_6ed0298 _public_6ed0298

PROC_DECLARE(0x6ed0290, internal_6ed0290, public_6ed0290);
extern "C" NAKED register_t __cdecl internal_6ed0290()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ed0298
        ret 
        public_6ed0298 : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        sub ecx, eax
        mov eax, 0x78787879
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ed0290)
    }
}

#undef public_6ed0298
