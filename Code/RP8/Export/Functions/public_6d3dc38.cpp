#include "RP8-PCH.h"

PROC_DECLARE(0x6d3dc38, internal_6d3dc38, public_6d3dc38);
extern "C" NAKED register_t __cdecl internal_6d3dc38()
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
        fld dword ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp+8]
        fld st(0)
        fstp dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp-4]
        fldz 
        mov dword ptr ds : [eax+4], ecx
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fld dword ptr ss : [ebp-4]
        fchs 
        fstp dword ptr ds : [eax+0x10]
        fstp dword ptr ds : [eax+0x14]
        fldz 
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fldz 
        fstp dword ptr ds : [eax+0x20]
        fldz 
        fstp dword ptr ds : [eax+0x24]
        fld1 
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
        UNREACHABLE_TRAP(0x6d3dc38)
    }
}
