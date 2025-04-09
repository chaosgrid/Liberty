#include "Freelancer-PCH.h"

PROC_DECLARE(0x51df90, internal_51df90, public_51df90);
extern "C" NAKED register_t __cdecl internal_51df90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc134]
        mov dword ptr ds : [public_6752c4], eax
        ret 
        UNREACHABLE_TRAP(0x51df90)
    }
}
