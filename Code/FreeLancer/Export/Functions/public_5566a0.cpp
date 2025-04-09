#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5566a0);

PROC_DECLARE(0x5566a0, internal_5566a0, public_5566a0);
extern "C" NAKED register_t __cdecl internal_5566a0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x24]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x24]
        mov dword ptr ds : [ecx+0x40], 0x3F800000
        fstp dword ptr ds : [ecx+0x48]
        mov dword ptr ds : [ecx+0x44], 0
        fld dword ptr ds : [ecx+0x48]
        fld dword ptr ds : [ecx+0x44]
        fld dword ptr ds : [ecx+0x40]
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
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [ecx+0x40]
        fstp dword ptr ds : [ecx+0x40]
        fld st(0)
        fmul dword ptr ds : [ecx+0x44]
        fstp dword ptr ds : [ecx+0x44]
        fmul dword ptr ds : [ecx+0x48]
        fstp dword ptr ds : [ecx+0x48]
        fld dword ptr ds : [ecx+0x30]
        fdiv dword ptr ds : [ecx+0x24]
        fstp dword ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x5566a0)
    }
}
