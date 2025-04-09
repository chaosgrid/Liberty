#include "Freelancer-PCH.h"


#define public_53f91b _public_53f91b

PROC_DECLARE(0x53f8d0, internal_53f8d0, public_53f8d0);
extern "C" NAKED register_t __cdecl internal_53f8d0()
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
        fcom dword ptr ds : [public_5d7e84]
        fnstsw ax
        test ah, 0x41
        jne public_53f91b
        fdivr qword ptr ds : [public_5c89b8]
        fld st(0)
        fmul dword ptr ds : [ecx+0x60]
        fstp dword ptr ds : [ecx+0x60]
        fld st(0)
        fmul dword ptr ds : [ecx+0x64]
        fstp dword ptr ds : [ecx+0x64]
        fmul dword ptr ds : [ecx+0x68]
        fstp dword ptr ds : [ecx+0x68]
        ret 
        public_53f91b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x53f8d0)
    }
}

#undef public_53f91b
