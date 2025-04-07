#include "Server-PCH.h"

PROC_DECLARE(0x6d171f0, internal_6d171f0, public_6d171f0);
extern "C" NAKED register_t __cdecl internal_6d171f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d685c0]
        mov dword ptr ds : [public_6d8e56c], eax
        ret 
        UNREACHABLE_TRAP(0x6d171f0)
    }
}
