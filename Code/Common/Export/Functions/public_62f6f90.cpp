#include "Common-PCH.h"


#define public_62f6f99 _public_62f6f99

PROC_DECLARE(0x62f6f90, internal_62f6f90, public_62f6f90);
extern "C" NAKED register_t __cdecl internal_62f6f90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x7C]
        test eax, eax
        jne public_62f6f99
        mov eax, ecx
        public_62f6f99 : nop
        ret 
        UNREACHABLE_TRAP(0x62f6f90)
    }
}

#undef public_62f6f99
