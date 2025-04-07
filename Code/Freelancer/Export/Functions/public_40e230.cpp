#include "Freelancer-PCH.h"

PROC_DECLARE(0x40e230, internal_40e230, public_40e230);
extern "C" NAKED register_t __cdecl internal_40e230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8460]
        mov dword ptr ds : [public_6164c8], eax
        ret 
        UNREACHABLE_TRAP(0x40e230)
    }
}
