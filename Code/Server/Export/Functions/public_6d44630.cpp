#include "Server-PCH.h"

PROC_DECLARE(0x6d44630, internal_6d44630, public_6d44630);
extern "C" NAKED register_t __cdecl internal_6d44630()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ad64]
        mov dword ptr ds : [public_6d8fb08], eax
        ret 
        UNREACHABLE_TRAP(0x6d44630)
    }
}
