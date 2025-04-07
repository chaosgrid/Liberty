#include "FLServer-PCH.h"


#define public_409a3b _public_409a3b

PROC_DECLARE(0x4099f0, internal_4099f0, public_4099f0);
extern "C" NAKED register_t __cdecl internal_4099f0()
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
        fcom dword ptr ds : [public_41d020]
        fnstsw ax
        test ah, 0x41
        jne public_409a3b
        fdivr qword ptr ds : [public_41c078]
        fld st(0)
        fmul dword ptr ds : [ecx+0x60]
        fstp dword ptr ds : [ecx+0x60]
        fld st(0)
        fmul dword ptr ds : [ecx+0x64]
        fstp dword ptr ds : [ecx+0x64]
        fmul dword ptr ds : [ecx+0x68]
        fstp dword ptr ds : [ecx+0x68]
        ret 
        public_409a3b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x4099f0)
    }
}

#undef public_409a3b
