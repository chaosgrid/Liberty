#include "EngBase-PCH.h"

PROC_DECLARE(0x66121d0, internal_66121d0, public_66121d0);
extern "C" NAKED register_t __cdecl internal_66121d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0x3C
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x66121d0)
    }
}
