#include "Common-PCH.h"


#define public_62f4729 _public_62f4729

PROC_DECLARE(0x62f4720, internal_62f4720, public_62f4720);
extern "C" NAKED register_t __cdecl internal_62f4720()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x74]
        test eax, eax
        jne public_62f4729
        mov eax, ecx
        public_62f4729 : nop
        ret 
        UNREACHABLE_TRAP(0x62f4720)
    }
}

#undef public_62f4729
