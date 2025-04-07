#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d3a0, internal_6b5d3a0, public_6b5d3a0);
extern "C" NAKED register_t __cdecl internal_6b5d3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6d8]
        mov dword ptr ds : [public_6b742b0], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d3a0)
    }
}
