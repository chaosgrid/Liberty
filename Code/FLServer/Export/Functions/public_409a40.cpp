#include "FLServer-PCH.h"


#define public_409a8b _public_409a8b

PROC_DECLARE(0x409a40, internal_409a40, public_409a40);
extern "C" NAKED register_t __cdecl internal_409a40()
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
        fcom dword ptr ds : [public_41d020]
        fnstsw ax
        test ah, 0x41
        jne public_409a8b
        fdivr qword ptr ds : [public_41c078]
        fld st(0)
        fmul dword ptr ds : [ecx+0x6C]
        fstp dword ptr ds : [ecx+0x6C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x70]
        fstp dword ptr ds : [ecx+0x70]
        fmul dword ptr ds : [ecx+0x74]
        fstp dword ptr ds : [ecx+0x74]
        ret 
        public_409a8b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x409a40)
    }
}

#undef public_409a8b
