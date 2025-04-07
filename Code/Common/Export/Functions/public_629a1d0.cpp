#include "Common-PCH.h"


#define public_629a1e9 _public_629a1e9

PROC_DECLARE(0x629a1d0, internal_629a1d0, public_629a1d0);
extern "C" NAKED register_t __cdecl internal_629a1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+0x50]
        fcomp dword ptr ds : [eax+0x90]
        fnstsw ax
        test ah, 1
        jne public_629a1e9
        mov eax, 1
        ret 
        public_629a1e9 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x629a1d0)
    }
}

#undef public_629a1e9
