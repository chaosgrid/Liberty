#include "Common-PCH.h"


#define public_62b690c _public_62b690c

PROC_DECLARE(0x62b6900, internal_62b6900, public_62b6900);
extern "C" NAKED register_t __cdecl internal_62b6900()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        jne public_62b690c
        mov eax, dword ptr ds : [public_63991d0]
        public_62b690c : nop
        ret 
        UNREACHABLE_TRAP(0x62b6900)
    }
}

#undef public_62b690c
