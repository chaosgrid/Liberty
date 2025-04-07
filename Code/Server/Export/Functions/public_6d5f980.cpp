#include "Server-PCH.h"

PROC_DECLARE(0x6d5f980, internal_6d5f980, public_6d5f980);
extern "C" NAKED register_t __cdecl internal_6d5f980()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb3c]
        mov dword ptr ds : [public_6d90490], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f980)
    }
}
