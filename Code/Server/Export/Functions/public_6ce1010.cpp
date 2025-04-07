#include "Server-PCH.h"

PROC_DECLARE(0x6ce1010, internal_6ce1010, public_6ce1010);
extern "C" NAKED register_t __cdecl internal_6ce1010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64cdc]
        mov dword ptr ds : [public_6d8d578], eax
        ret 
        UNREACHABLE_TRAP(0x6ce1010)
    }
}
