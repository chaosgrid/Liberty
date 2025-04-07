#include "Server-PCH.h"


#define public_6ce1fcb _public_6ce1fcb

PROC_DECLARE(0x6ce1f80, internal_6ce1f80, public_6ce1f80);
extern "C" NAKED register_t __cdecl internal_6ce1f80()
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
        fcom dword ptr ds : [public_6d64f08]
        fnstsw ax
        test ah, 0x41
        jne public_6ce1fcb
        fdivr qword ptr ds : [public_6d64f00]
        fld st(0)
        fmul dword ptr ds : [ecx+0x60]
        fstp dword ptr ds : [ecx+0x60]
        fld st(0)
        fmul dword ptr ds : [ecx+0x64]
        fstp dword ptr ds : [ecx+0x64]
        fmul dword ptr ds : [ecx+0x68]
        fstp dword ptr ds : [ecx+0x68]
        ret 
        public_6ce1fcb : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6ce1f80)
    }
}

#undef public_6ce1fcb
