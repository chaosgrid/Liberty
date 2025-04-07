#include "RP8-PCH.h"

PROC_DECLARE(0x6d3da09, internal_6d3da09, public_6d3da09);
extern "C" NAKED register_t __cdecl internal_6d3da09()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fldz 
        fstp dword ptr ds : [eax+0x38]
        mov ecx, dword ptr ss : [esp+8]
        fldz 
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ds : [eax+0x34]
        mov ecx, dword ptr ss : [esp+0xC]
        fldz 
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x30]
        mov dword ptr ds : [eax+0x28], ecx
        fldz 
        fstp dword ptr ds : [eax+0x2C]
        fldz 
        fstp dword ptr ds : [eax+0x24]
        fldz 
        fstp dword ptr ds : [eax+0x20]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fldz 
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x10]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fldz 
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+4]
        fld1 
        fstp dword ptr ds : [eax+0x3C]
        ret 0x10
        UNREACHABLE_TRAP(0x6d3da09)
    }
}
