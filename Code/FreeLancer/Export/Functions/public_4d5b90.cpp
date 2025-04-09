#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d5b90, internal_4d5b90, public_4d5b90);
extern "C" NAKED register_t __cdecl internal_4d5b90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d7e98]
        mov dword ptr ds : [public_6749c4], eax
        ret 
        UNREACHABLE_TRAP(0x4d5b90)
    }
}
