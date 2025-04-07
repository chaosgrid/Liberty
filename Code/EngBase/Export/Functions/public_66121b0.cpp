#include "EngBase-PCH.h"

PROC_DECLARE(0x66121b0, internal_66121b0, public_66121b0);
extern "C" NAKED register_t __cdecl internal_66121b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x3C
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        ret 4
        UNREACHABLE_TRAP(0x66121b0)
    }
}
