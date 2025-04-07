#include "Server-PCH.h"

PROC_DECLARE(0x6d44620, internal_6d44620, public_6d44620);
extern "C" NAKED register_t __cdecl internal_6d44620()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ad64]
        mov dword ptr ds : [public_6d8fb0c], eax
        ret 
        UNREACHABLE_TRAP(0x6d44620)
    }
}
