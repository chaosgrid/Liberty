#include "Common-PCH.h"


#define public_6262f03 _public_6262f03

PROC_DECLARE(0x6262ef0, internal_6262ef0, public_6262ef0);
extern "C" NAKED register_t __cdecl internal_6262ef0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x404]
        cmp eax, dword ptr ds : [ecx+0x400]
        jae public_6262f03
        movsx eax, byte ptr ds : [eax+ecx]
        ret 
        public_6262f03 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6262ef0)
    }
}

#undef public_6262f03
