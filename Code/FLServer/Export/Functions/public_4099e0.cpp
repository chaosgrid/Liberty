#include "FLServer-PCH.h"

PROC_DECLARE(0x4099e0, internal_4099e0, public_4099e0);
extern "C" NAKED register_t __cdecl internal_4099e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*4+8]
        ret 4
        UNREACHABLE_TRAP(0x4099e0)
    }
}
