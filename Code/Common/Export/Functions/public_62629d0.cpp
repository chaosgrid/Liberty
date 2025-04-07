#include "Common-PCH.h"


#define public_62629dc _public_62629dc

PROC_DECLARE(0x62629d0, internal_62629d0, public_62629d0);
extern "C" NAKED register_t __cdecl internal_62629d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_62629dc
        mov eax, dword ptr ds : [public_63991d0]
        public_62629dc : nop
        ret 
        UNREACHABLE_TRAP(0x62629d0)
    }
}

#undef public_62629dc
