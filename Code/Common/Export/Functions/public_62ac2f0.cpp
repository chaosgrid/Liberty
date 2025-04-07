#include "Common-PCH.h"

PROC_DECLARE(0x62ac2f0, internal_62ac2f0, public_62ac2f0);
extern "C" NAKED register_t __cdecl internal_62ac2f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x190]
        and eax, dword ptr ss : [esp+4]
        neg eax
        sbb eax, eax
        neg eax
        ret 4
        UNREACHABLE_TRAP(0x62ac2f0)
    }
}
