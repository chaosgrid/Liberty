#include "Common-PCH.h"

PROC_DECLARE(0x62830f0, internal_62830f0, public_62830f0);
extern "C" NAKED register_t __cdecl internal_62830f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*4+8]
        ret 4
        UNREACHABLE_TRAP(0x62830f0)
    }
}
