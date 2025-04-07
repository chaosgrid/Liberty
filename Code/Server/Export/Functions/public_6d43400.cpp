#include "Server-PCH.h"

PROC_DECLARE(0x6d43400, internal_6d43400, public_6d43400);
extern "C" NAKED register_t __cdecl internal_6d43400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6ac60]
        mov dword ptr ds : [public_6d8f758], eax
        ret 
        UNREACHABLE_TRAP(0x6d43400)
    }
}
