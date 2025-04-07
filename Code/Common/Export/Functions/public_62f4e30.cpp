#include "Common-PCH.h"


#define public_62f4e39 _public_62f4e39

PROC_DECLARE(0x62f4e30, internal_62f4e30, public_62f4e30);
extern "C" NAKED register_t __cdecl internal_62f4e30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x70]
        test eax, eax
        jne public_62f4e39
        mov eax, ecx
        public_62f4e39 : nop
        ret 
        UNREACHABLE_TRAP(0x62f4e30)
    }
}

#undef public_62f4e39
