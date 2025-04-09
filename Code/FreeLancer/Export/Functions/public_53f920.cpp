#include "Freelancer-PCH.h"


#define public_53f96b _public_53f96b

PROC_DECLARE(0x53f920, internal_53f920, public_53f920);
extern "C" NAKED register_t __cdecl internal_53f920()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x74]
        fld dword ptr ds : [ecx+0x70]
        fld dword ptr ds : [ecx+0x6C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_5d7e84]
        fnstsw ax
        test ah, 0x41
        jne public_53f96b
        fdivr qword ptr ds : [public_5c89b8]
        fld st(0)
        fmul dword ptr ds : [ecx+0x6C]
        fstp dword ptr ds : [ecx+0x6C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x70]
        fstp dword ptr ds : [ecx+0x70]
        fmul dword ptr ds : [ecx+0x74]
        fstp dword ptr ds : [ecx+0x74]
        ret 
        public_53f96b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x53f920)
    }
}

#undef public_53f96b
