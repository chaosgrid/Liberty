#include "Server-PCH.h"

PROC_DECLARE(0x6ce1020, internal_6ce1020, public_6ce1020);
extern "C" NAKED register_t __cdecl internal_6ce1020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64ce0]
        mov dword ptr ds : [public_6d8d574], eax
        ret 
        UNREACHABLE_TRAP(0x6ce1020)
    }
}
