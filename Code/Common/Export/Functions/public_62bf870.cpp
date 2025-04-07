#include "Common-PCH.h"


#define public_62bf895 _public_62bf895

PROC_DECLARE(0x62bf870, internal_62bf870, public_62bf870);
extern "C" NAKED register_t __cdecl internal_62bf870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        test eax, eax
        je public_62bf895
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62bf895
        mov edx, dword ptr ds : [eax+0x88]
        fld dword ptr ds : [edx+0x12C]
        ret 
        public_62bf895 : nop
        fld dword ptr ds : [public_6399408]
        ret 
        UNREACHABLE_TRAP(0x62bf870)
    }
}

#undef public_62bf895
