#include "Freelancer-PCH.h"

PROC_DECLARE(0x437b60, internal_437b60, public_437b60);
extern "C" NAKED register_t __cdecl internal_437b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caee0]
        mov dword ptr ds : [public_6686f8], eax
        ret 
        UNREACHABLE_TRAP(0x437b60)
    }
}
