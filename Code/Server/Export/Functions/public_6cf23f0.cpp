#include "Server-PCH.h"

PROC_DECLARE(0x6cf23f0, internal_6cf23f0, public_6cf23f0);
extern "C" NAKED register_t __cdecl internal_6cf23f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65f88]
        mov dword ptr ds : [public_6d8d770], eax
        ret 
        UNREACHABLE_TRAP(0x6cf23f0)
    }
}
