#include "Server-PCH.h"

PROC_DECLARE(0x6ce6520, internal_6ce6520, public_6ce6520);
extern "C" NAKED register_t __cdecl internal_6ce6520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6519c]
        mov dword ptr ds : [public_6d8d6c8], eax
        ret 
        UNREACHABLE_TRAP(0x6ce6520)
    }
}
