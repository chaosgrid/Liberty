#include "Common-PCH.h"


#define public_62b691c _public_62b691c

PROC_DECLARE(0x62b6910, internal_62b6910, public_62b6910);
extern "C" NAKED register_t __cdecl internal_62b6910()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        test eax, eax
        jne public_62b691c
        mov eax, dword ptr ds : [public_63991d0]
        public_62b691c : nop
        ret 
        UNREACHABLE_TRAP(0x62b6910)
    }
}

#undef public_62b691c
