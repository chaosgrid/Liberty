#include "Server-PCH.h"

PROC_DECLARE(0x6d5c8b0, internal_6d5c8b0, public_6d5c8b0);
extern "C" NAKED register_t __cdecl internal_6d5c8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9c0]
        mov dword ptr ds : [public_6d90458], eax
        ret 
        UNREACHABLE_TRAP(0x6d5c8b0)
    }
}
