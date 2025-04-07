#include "Common-PCH.h"


#define public_6262dc6 _public_6262dc6

PROC_DECLARE(0x6262db0, internal_6262db0, public_6262db0);
extern "C" NAKED register_t __cdecl internal_6262db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jl public_6262dc6
        cmp eax, dword ptr ds : [ecx+0x88]
        jg public_6262dc6
        mov dword ptr ds : [ecx+0x84], eax
        public_6262dc6 : nop
        mov eax, dword ptr ds : [ecx+0x84]
        ret 4
        UNREACHABLE_TRAP(0x6262db0)
    }
}

#undef public_6262dc6
