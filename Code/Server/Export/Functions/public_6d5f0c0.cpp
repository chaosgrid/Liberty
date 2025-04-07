#include "Server-PCH.h"

PROC_DECLARE(0x6d5f0c0, internal_6d5f0c0, public_6d5f0c0);
extern "C" NAKED register_t __cdecl internal_6d5f0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb24]
        mov dword ptr ds : [public_6d90488], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f0c0)
    }
}
