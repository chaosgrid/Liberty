#include "Server-PCH.h"

PROC_DECLARE(0x6d5f0d0, internal_6d5f0d0, public_6d5f0d0);
extern "C" NAKED register_t __cdecl internal_6d5f0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb24]
        mov dword ptr ds : [public_6d90484], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f0d0)
    }
}
