#include "Common-PCH.h"

PROC_DECLARE(0x6334700, internal_6334700, public_6334700);
extern "C" NAKED register_t __cdecl internal_6334700()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+0xC]
        lea eax, ds:[eax+eax*8]
        lea eax, ds:[ecx+eax*8]
        ret 4
        UNREACHABLE_TRAP(0x6334700)
    }
}
