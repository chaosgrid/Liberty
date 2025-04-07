#include "Server-PCH.h"

PROC_DECLARE(0x6ce1000, internal_6ce1000, public_6ce1000);
extern "C" NAKED register_t __cdecl internal_6ce1000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64cdc]
        mov dword ptr ds : [public_6d8d57c], eax
        ret 
        UNREACHABLE_TRAP(0x6ce1000)
    }
}
