#include "Server-PCH.h"

PROC_DECLARE(0x6d0f9d0, internal_6d0f9d0, public_6d0f9d0);
extern "C" NAKED register_t __cdecl internal_6d0f9d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6830c]
        mov dword ptr ds : [public_6d8da58], eax
        ret 
        UNREACHABLE_TRAP(0x6d0f9d0)
    }
}
