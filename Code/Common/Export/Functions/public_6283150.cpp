#include "Common-PCH.h"


#define public_628319b _public_628319b

PROC_DECLARE(0x6283150, internal_6283150, public_6283150);
extern "C" NAKED register_t __cdecl internal_6283150()
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
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_628319b
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [ecx+0x6C]
        fstp dword ptr ds : [ecx+0x6C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x70]
        fstp dword ptr ds : [ecx+0x70]
        fmul dword ptr ds : [ecx+0x74]
        fstp dword ptr ds : [ecx+0x74]
        ret 
        public_628319b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6283150)
    }
}

#undef public_628319b
