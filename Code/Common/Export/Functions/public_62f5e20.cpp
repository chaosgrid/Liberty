#include "Common-PCH.h"


#define public_62f5e39 _public_62f5e39
#define public_62f5e3e _public_62f5e3e

PROC_DECLARE(0x62f5e20, internal_62f5e20, public_62f5e20);
extern "C" NAKED register_t __cdecl internal_62f5e20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xAC]
        test edx, edx
        je public_62f5e39
        mov eax, dword ptr ds : [ecx+0xB0]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jne public_62f5e3e
        public_62f5e39 : nop
        mov eax, 0x22
        public_62f5e3e : nop
        ret 
        UNREACHABLE_TRAP(0x62f5e20)
    }
}

#undef public_62f5e39
#undef public_62f5e3e
