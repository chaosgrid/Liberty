#include "Server-PCH.h"

PROC_DECLARE(0x6d5f0e0, internal_6d5f0e0, public_6d5f0e0);
extern "C" NAKED register_t __cdecl internal_6d5f0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb28]
        mov dword ptr ds : [public_6d90480], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f0e0)
    }
}
