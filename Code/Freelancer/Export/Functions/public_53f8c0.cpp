#include "Freelancer-PCH.h"

PROC_DECLARE(0x53f8c0, internal_53f8c0, public_53f8c0);
extern "C" NAKED register_t __cdecl internal_53f8c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*4+8]
        ret 4
        UNREACHABLE_TRAP(0x53f8c0)
    }
}
