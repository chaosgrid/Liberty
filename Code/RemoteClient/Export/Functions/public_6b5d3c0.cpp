#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b5d3c0, internal_6b5d3c0, public_6b5d3c0);
extern "C" NAKED register_t __cdecl internal_6b5d3c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e6dc]
        mov dword ptr ds : [public_6b742ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b5d3c0)
    }
}
