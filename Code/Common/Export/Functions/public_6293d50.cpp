#include "Common-PCH.h"


#define public_6293d5b _public_6293d5b

PROC_DECLARE(0x6293d50, internal_6293d50, public_6293d50);
extern "C" NAKED register_t __cdecl internal_6293d50()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6293d5b
        mov eax, dword ptr ds : [eax+4]
        ret 
        public_6293d5b : nop
        or eax, 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6293d50)
    }
}

#undef public_6293d5b
