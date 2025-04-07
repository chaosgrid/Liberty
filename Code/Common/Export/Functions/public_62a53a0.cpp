#include "Common-PCH.h"


#define public_62a53b0 _public_62a53b0

PROC_DECLARE(0x62a53a0, internal_62a53a0, public_62a53a0);
extern "C" NAKED register_t __cdecl internal_62a53a0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x28]
        test ecx, ecx
        jne public_62a53b0
        fld dword ptr ds : [public_639a1d0]
        ret 4
        public_62a53b0 : nop
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x62a53a0)
    }
}

#undef public_62a53b0
