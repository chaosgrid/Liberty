#include "Common-PCH.h"


#define public_62b68fc _public_62b68fc

PROC_DECLARE(0x62b68f0, internal_62b68f0, public_62b68f0);
extern "C" NAKED register_t __cdecl internal_62b68f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_62b68fc
        mov eax, dword ptr ds : [public_63991d0]
        public_62b68fc : nop
        ret 
        UNREACHABLE_TRAP(0x62b68f0)
    }
}

#undef public_62b68fc
