#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b6b10, internal_4b6b10, public_4b6b10);
extern "C" NAKED register_t __cdecl internal_4b6b10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d55f8]
        mov dword ptr ds : [public_6722c4], eax
        ret 
        UNREACHABLE_TRAP(0x4b6b10)
    }
}
