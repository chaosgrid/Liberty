#include "RP8-PCH.h"

PROC_DECLARE(0x6d3d065, internal_6d3d065, public_6d3d065);
extern "C" NAKED register_t __cdecl internal_6d3d065()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [eax+0x28]
        fmul dword ptr ds : [eax+0x3C]
        fld dword ptr ds : [eax+0x38]
        fmul dword ptr ds : [eax+0x2C]
        fsubp 
        fld dword ptr ds : [eax+0x3C]
        fmul dword ptr ds : [eax+0x24]
        fld dword ptr ds : [eax+0x34]
        fmul dword ptr ds : [eax+0x2C]
        fsubp 
        fld dword ptr ds : [eax+0x38]
        fmul dword ptr ds : [eax+0x24]
        fld dword ptr ds : [eax+0x28]
        fmul dword ptr ds : [eax+0x34]
        fsubp 
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [eax+0x3C]
        fld dword ptr ds : [eax+0x30]
        fmul dword ptr ds : [eax+0x2C]
        fsubp 
        fld dword ptr ds : [eax+0x38]
        fmul dword ptr ds : [eax+0x20]
        fld dword ptr ds : [eax+0x30]
        fmul dword ptr ds : [eax+0x28]
        fsubp 
        fld dword ptr ds : [eax+0x20]
        fmul dword ptr ds : [eax+0x34]
        fld dword ptr ds : [eax+0x30]
        fmul dword ptr ds : [eax+0x24]
        fsubp 
        fstp dword ptr ss : [ebp+8]
        fld st(4)
        fmul dword ptr ds : [eax+0x14]
        fld st(4)
        fmul dword ptr ds : [eax+0x18]
        fsubp 
        fld st(3)
        fmul dword ptr ds : [eax+0x1C]
        faddp 
        fmul dword ptr ds : [eax]
        fld st(5)
        fmul dword ptr ds : [eax+0x10]
        fld st(3)
        fmul dword ptr ds : [eax+0x18]
        fsubp 
        fld st(2)
        fmul dword ptr ds : [eax+0x1C]
        faddp 
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld st(4)
        fmul dword ptr ds : [eax+0x10]
        fld st(3)
        fmul dword ptr ds : [eax+0x14]
        fsubp 
        fld dword ptr ss : [ebp+8]
        fmul dword ptr ds : [eax+0x1C]
        faddp 
        fmul dword ptr ds : [eax+8]
        faddp 
        fld st(3)
        fmul dword ptr ds : [eax+0x10]
        fld st(2)
        fmul dword ptr ds : [eax+0x14]
        fsubp 
        fld dword ptr ss : [ebp+8]
        fmul dword ptr ds : [eax+0x18]
        faddp 
        fmul dword ptr ds : [eax+0xC]
        fsubp 
        fstp st(5)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d3d065)
    }
}
