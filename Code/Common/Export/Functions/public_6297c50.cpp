#include "Common-PCH.h"


#define public_6297c68 _public_6297c68

PROC_DECLARE(0x6297c50, internal_6297c50, public_6297c50);
extern "C" NAKED register_t __cdecl internal_6297c50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x218]
        or eax, 0xFFFFFFFF
        cmp edx, eax
        jne public_6297c68
        cmp dword ptr ds : [ecx+0x1FC], eax
        jne public_6297c68
        xor eax, eax
        ret 
        public_6297c68 : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6297c50)
    }
}

#undef public_6297c68
