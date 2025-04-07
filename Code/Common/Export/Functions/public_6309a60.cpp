#include "Common-PCH.h"

PROC_DECLARE(0x6309a60, internal_6309a60, public_6309a60);
extern "C" NAKED register_t __cdecl internal_6309a60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax+0x38]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x3C
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 0x10
        UNREACHABLE_TRAP(0x6309a60)
    }
}
