#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634d860);

PROC_DECLARE(0x634d860, internal_634d860, public_634d860);
extern "C" NAKED register_t __cdecl internal_634d860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [ecx+0x4C]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+0x50]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        fsub dword ptr ds : [ecx+0x54]
        fld dword ptr ds : [ecx+0x3C]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x2C]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx+0x1C]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax]
        fld dword ptr ds : [ecx+0x40]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x30]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx+0x20]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+0x44]
        fmul st, st(1)
        fld dword ptr ds : [ecx+0x34]
        fmul st, st(3)
        faddp 
        fld dword ptr ds : [ecx+0x24]
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax+8]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        ret 8
        UNREACHABLE_TRAP(0x634d860)
    }
}
