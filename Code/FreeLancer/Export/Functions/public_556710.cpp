#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556710);

PROC_DECLARE(0x556710, internal_556710, public_556710);
extern "C" NAKED register_t __cdecl internal_556710()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x28]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [ecx+0x18]
        fld dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [ecx+0x4C], 0
        fstp dword ptr ds : [ecx+0x54]
        mov dword ptr ds : [ecx+0x50], 0x3F800000
        fld dword ptr ds : [ecx+0x54]
        fld dword ptr ds : [ecx+0x50]
        fld dword ptr ds : [ecx+0x4C]
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
        fmul dword ptr ds : [ecx+0x4C]
        fstp dword ptr ds : [ecx+0x4C]
        fld st(0)
        fmul dword ptr ds : [ecx+0x50]
        fstp dword ptr ds : [ecx+0x50]
        fmul dword ptr ds : [ecx+0x54]
        fstp dword ptr ds : [ecx+0x54]
        fld dword ptr ds : [ecx+0x34]
        fdiv dword ptr ds : [ecx+0x28]
        fchs 
        fstp dword ptr ds : [ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x556710)
    }
}
