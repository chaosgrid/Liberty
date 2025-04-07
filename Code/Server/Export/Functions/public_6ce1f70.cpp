#include "Server-PCH.h"

PROC_DECLARE(0x6ce1f70, internal_6ce1f70, public_6ce1f70);
extern "C" NAKED register_t __cdecl internal_6ce1f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea eax, ds:[eax+eax*2]
        lea eax, ds:[ecx+eax*4+8]
        ret 4
        UNREACHABLE_TRAP(0x6ce1f70)
    }
}
