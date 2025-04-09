#include "Freelancer-PCH.h"

PROC_DECLARE(0x41a830, internal_41a830, public_41a830);
extern "C" NAKED register_t __cdecl internal_41a830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9278]
        mov dword ptr ds : [public_61670c], eax
        ret 
        UNREACHABLE_TRAP(0x41a830)
    }
}
