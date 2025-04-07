#include "Server-PCH.h"

PROC_DECLARE(0x6d115a0, internal_6d115a0, public_6d115a0);
extern "C" NAKED register_t __cdecl internal_6d115a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d68318]
        mov dword ptr ds : [public_6d8da68], eax
        ret 
        UNREACHABLE_TRAP(0x6d115a0)
    }
}
