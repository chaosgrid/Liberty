#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_556e00);

PROC_DECLARE(0x556e00, internal_556e00, public_556e00);
extern "C" NAKED register_t __cdecl internal_556e00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fstp dword ptr ds : [eax+0x1C]
        mov edx, 0x3F800000
        fld dword ptr ds : [eax+0x14]
        xor ecx, ecx
        fadd st(0), st
        fmul dword ptr ds : [public_5c901c]
        fptan 
        fstp st(0)
        fst dword ptr ds : [eax+0x24]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [eax+0x14]
        fld dword ptr ds : [eax+0x24]
        mov dword ptr ds : [eax+0x40], edx
        fstp dword ptr ds : [eax+0x48]
        mov dword ptr ds : [eax+0x44], ecx
        fld dword ptr ds : [eax+0x48]
        fld dword ptr ds : [eax+0x44]
        fld dword ptr ds : [eax+0x40]
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
        fmul dword ptr ds : [eax+0x40]
        fstp dword ptr ds : [eax+0x40]
        fld st(0)
        fmul dword ptr ds : [eax+0x44]
        fstp dword ptr ds : [eax+0x44]
        fmul dword ptr ds : [eax+0x48]
        fstp dword ptr ds : [eax+0x48]
        fld dword ptr ds : [eax+0x30]
        fdiv dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x38]
        fld dword ptr ds : [eax+0x24]
        fdiv dword ptr ds : [eax+0x28]
        fstp dword ptr ds : [eax+0x2C]
        fld dword ptr ds : [eax+0x18]
        fadd st(0), st
        fmul dword ptr ds : [public_5c901c]
        fptan 
        fstp st(0)
        fst dword ptr ds : [eax+0x28]
        fld1 
        fpatan 
        fmul qword ptr ds : [public_5c8928]
        fstp dword ptr ds : [eax+0x18]
        fld dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax+0x4C], ecx
        fstp dword ptr ds : [eax+0x54]
        mov dword ptr ds : [eax+0x50], edx
        fld dword ptr ds : [eax+0x54]
        fld dword ptr ds : [eax+0x50]
        fld dword ptr ds : [eax+0x4C]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5c75dc]
        fld st(0)
        fmul dword ptr ds : [eax+0x4C]
        fstp dword ptr ds : [eax+0x4C]
        fld st(0)
        fmul dword ptr ds : [eax+0x50]
        fstp dword ptr ds : [eax+0x50]
        fmul dword ptr ds : [eax+0x54]
        fstp dword ptr ds : [eax+0x54]
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ds : [eax+0x28]
        fld st(0)
        fmul dword ptr ds : [eax+0x34]
        fchs 
        fstp dword ptr ds : [eax+0x3C]
        fmul dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x2C]
        ret 
        UNREACHABLE_TRAP(0x556e00)
    }
}
