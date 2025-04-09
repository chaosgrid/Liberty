#include "Freelancer-PCH.h"

PROC_DECLARE(0x4b9880, internal_4b9880, public_4b9880);
extern "C" NAKED register_t __cdecl internal_4b9880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d59f4]
        mov dword ptr ds : [public_6723ec], eax
        ret 
        UNREACHABLE_TRAP(0x4b9880)
    }
}
