#include "Freelancer-PCH.h"


#define public_45332b _public_45332b

PROC_DECLARE(0x453310, internal_453310, public_453310);
extern "C" NAKED register_t __cdecl internal_453310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x5C]
        cmp eax, 0xFFFFFFFF
        je public_45332b
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        setne cl
        mov byte ptr ds : [eax+public_66d230], cl
        public_45332b : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x453310)
    }
}

#undef public_45332b
