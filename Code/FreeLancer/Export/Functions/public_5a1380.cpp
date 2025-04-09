#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a1380, internal_5a1380, public_5a1380);
extern "C" NAKED register_t __cdecl internal_5a1380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+0x31C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [ecx+0x31C]
        fld dword ptr ds : [eax+4]
        fadd dword ptr ds : [ecx+0x320]
        fstp dword ptr ds : [ecx+0x320]
        fld dword ptr ds : [eax+8]
        fadd dword ptr ds : [ecx+0x324]
        fstp dword ptr ds : [ecx+0x324]
        ret 4
        UNREACHABLE_TRAP(0x5a1380)
    }
}
