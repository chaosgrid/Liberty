#include "Server-PCH.h"

PROC_DECLARE(0x6d5f960, internal_6d5f960, public_6d5f960);
extern "C" NAKED register_t __cdecl internal_6d5f960()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6bb38]
        mov dword ptr ds : [public_6d90498], eax
        ret 
        UNREACHABLE_TRAP(0x6d5f960)
    }
}
