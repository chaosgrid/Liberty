#include "Alchemy-PCH.h"

PROC_DECLARE(0x62112d0, internal_62112d0, public_62112d0);
extern "C" NAKED register_t __cdecl internal_62112d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x13C]
        inc ecx
        mov dword ptr ds : [eax+0x13C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x62112d0)
    }
}
