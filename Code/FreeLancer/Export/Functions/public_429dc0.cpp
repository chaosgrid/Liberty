#include "FreeLancer-PCH.h"

PROC_DECLARE(0x429dc0, internal_429dc0, public_429dc0);
extern "C" NAKED register_t __cdecl internal_429dc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        add ecx, 0x48
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        ret 4
        UNREACHABLE_TRAP(0x429dc0)
    }
}
