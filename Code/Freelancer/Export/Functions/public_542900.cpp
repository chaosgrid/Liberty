#include "Freelancer-PCH.h"

PROC_DECLARE(0x542900, internal_542900, public_542900);
extern "C" NAKED register_t __cdecl internal_542900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dfb24]
        mov dword ptr ds : [public_678b5c], eax
        ret 
        UNREACHABLE_TRAP(0x542900)
    }
}
