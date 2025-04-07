#include "Server-PCH.h"

PROC_DECLARE(0x6ce6100, internal_6ce6100, public_6ce6100);
extern "C" NAKED register_t __cdecl internal_6ce6100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64f34]
        mov dword ptr ds : [public_6d8d694], eax
        ret 
        UNREACHABLE_TRAP(0x6ce6100)
    }
}
