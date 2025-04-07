#include "RP8-PCH.h"

PROC_DECLARE(0x6d3dba1, internal_6d3dba1, public_6d3dba1);
extern "C" NAKED register_t __cdecl internal_6d3dba1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        lea eax, ss:[ebp-4]
        mov dword ptr ss : [ebp-0xC], eax
        lea eax, ss:[ebp-8]
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+0xC]
        fsincos 
        fstp dword ptr ds : [edx]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp+8]
        fld st(0)
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [ebp-8]
        fld st(0)
        fchs 
        fstp dword ptr ds : [eax+8]
        fldz 
        fstp dword ptr ds : [eax+0xC]
        fldz 
        fstp dword ptr ds : [eax+0x10]
        fld1 
        fstp dword ptr ds : [eax+0x14]
        fldz 
        fstp dword ptr ds : [eax+0x18]
        fldz 
        fstp dword ptr ds : [eax+0x1C]
        fstp dword ptr ds : [eax+0x20]
        fldz 
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
        UNREACHABLE_TRAP(0x6d3dba1)
    }
}
