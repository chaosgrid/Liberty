#include "Server-PCH.h"

PROC_DECLARE(0x6ce6120, internal_6ce6120, public_6ce6120);
extern "C" NAKED register_t __cdecl internal_6ce6120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d64f38]
        mov dword ptr ds : [public_6d8d68c], eax
        ret 
        UNREACHABLE_TRAP(0x6ce6120)
    }
}
