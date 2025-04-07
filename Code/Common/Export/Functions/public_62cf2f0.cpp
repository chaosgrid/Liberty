#include "Common-PCH.h"


#define public_62cf2fb _public_62cf2fb

PROC_DECLARE(0x62cf2f0, internal_62cf2f0, public_62cf2f0);
extern "C" NAKED register_t __cdecl internal_62cf2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        test eax, eax
        je public_62cf2fb
        add eax, 0xFFFFFFF8
        ret 
        public_62cf2fb : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62cf2f0)
    }
}

#undef public_62cf2fb
