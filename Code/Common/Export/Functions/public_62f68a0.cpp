#include "Common-PCH.h"


#define public_62f68b9 _public_62f68b9
#define public_62f68be _public_62f68be

PROC_DECLARE(0x62f68a0, internal_62f68a0, public_62f68a0);
extern "C" NAKED register_t __cdecl internal_62f68a0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC0]
        test edx, edx
        je public_62f68b9
        mov eax, dword ptr ds : [ecx+0xC4]
        sub eax, edx
        sar eax, 2
        test eax, eax
        jne public_62f68be
        public_62f68b9 : nop
        mov eax, 0x17
        public_62f68be : nop
        ret 
        UNREACHABLE_TRAP(0x62f68a0)
    }
}

#undef public_62f68b9
#undef public_62f68be
