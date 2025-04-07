#include "Server-PCH.h"

PROC_DECLARE(0x6ce6500, internal_6ce6500, public_6ce6500);
extern "C" NAKED register_t __cdecl internal_6ce6500()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d65198]
        mov dword ptr ds : [public_6d8d6d0], eax
        ret 
        UNREACHABLE_TRAP(0x6ce6500)
    }
}
