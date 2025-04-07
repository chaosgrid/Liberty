#include "Common-PCH.h"


#define public_62a0140 _public_62a0140

PROC_DECLARE(0x62a0130, internal_62a0130, public_62a0130);
extern "C" NAKED register_t __cdecl internal_62a0130()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        cmp eax, 2
        je public_62a0140
        cmp eax, 3
        je public_62a0140
        xor eax, eax
        ret 
        public_62a0140 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x62a0130)
    }
}

#undef public_62a0140
