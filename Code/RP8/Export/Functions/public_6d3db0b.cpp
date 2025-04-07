#include "RP8-PCH.h"

PROC_DECLARE(0x6d3db0b, internal_6d3db0b, public_6d3db0b);
extern "C" NAKED register_t __cdecl internal_6d3db0b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp-0xC], eax
        lea eax, ss:[ebp-4]
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0xC]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld1 
        mov eax, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [eax]
        fldz 
        mov ecx, dword ptr ss : [ebp-4]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+0x18], ecx
        fldz 
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fldz 
        fstp dword ptr ds : [eax+0x10]
        fld dword ptr ss : [ebp-8]
        fst dword ptr ds : [eax+0x14]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fldz 
        fstp dword ptr ds : [eax+0x20]
        fld dword ptr ss : [ebp-4]
        fchs 
        fstp dword ptr ds : [eax+0x24]
        fstp dword ptr ds : [eax+0x28]
        fldz 
        fstp dword ptr ds : [eax+0x2C]
        fldz 
        fstp dword ptr ds : [eax+0x30]
        fldz 
        fstp dword ptr ds : [eax+0x34]
        fldz 
        fstp dword ptr ds : [eax+0x38]
        fld1 
        fstp dword ptr ds : [eax+0x3C]
        leave 
        ret 8
        UNREACHABLE_TRAP(0x6d3db0b)
    }
}
