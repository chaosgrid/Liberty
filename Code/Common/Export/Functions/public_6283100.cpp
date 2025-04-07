#include "Common-PCH.h"


#define public_628314b _public_628314b

PROC_DECLARE(0x6283100, internal_6283100, public_6283100);
extern "C" NAKED register_t __cdecl internal_6283100()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x68]
        fld dword ptr ds : [ecx+0x64]
        fld dword ptr ds : [ecx+0x60]
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
        jne public_628314b
        fdivr qword ptr ds : [public_6399410]
        fld st(0)
        fmul dword ptr ds : [ecx+0x60]
        fstp dword ptr ds : [ecx+0x60]
        fld st(0)
        fmul dword ptr ds : [ecx+0x64]
        fstp dword ptr ds : [ecx+0x64]
        fmul dword ptr ds : [ecx+0x68]
        fstp dword ptr ds : [ecx+0x68]
        ret 
        public_628314b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6283100)
    }
}

#undef public_628314b
