#include "Common-PCH.h"

PROC_DECLARE(0x6309930, internal_6309930, public_6309930);
extern "C" NAKED register_t __cdecl internal_6309930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        add eax, 0x2C
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6309930)
    }
}
