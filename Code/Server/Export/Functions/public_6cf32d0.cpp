#include "Server-PCH.h"

PROC_DECLARE(0x6cf32d0, internal_6cf32d0, public_6cf32d0);
extern "C" NAKED register_t __cdecl internal_6cf32d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65fc8]
        mov dword ptr ds : [public_6d8d798], eax
        ret 
        UNREACHABLE_TRAP(0x6cf32d0)
    }
}
