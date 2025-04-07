#include "Server-PCH.h"

PROC_DECLARE(0x6d5b0f0, internal_6d5b0f0, public_6d5b0f0);
extern "C" NAKED register_t __cdecl internal_6d5b0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9ac]
        mov dword ptr ds : [public_6d90448], eax
        ret 
        UNREACHABLE_TRAP(0x6d5b0f0)
    }
}
