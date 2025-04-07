#include "Server-PCH.h"

PROC_DECLARE(0x6cf32e0, internal_6cf32e0, public_6cf32e0);
extern "C" NAKED register_t __cdecl internal_6cf32e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65fcc]
        mov dword ptr ds : [public_6d8d794], eax
        ret 
        UNREACHABLE_TRAP(0x6cf32e0)
    }
}
