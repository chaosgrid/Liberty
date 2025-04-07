#include "Common-PCH.h"


#define public_628689e _public_628689e

PROC_DECLARE(0x6286890, internal_6286890, public_6286890);
extern "C" NAKED register_t __cdecl internal_6286890()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xF0]
        test eax, eax
        je public_628689e
        add eax, 0xFFFFFFF8
        ret 
        public_628689e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6286890)
    }
}

#undef public_628689e
