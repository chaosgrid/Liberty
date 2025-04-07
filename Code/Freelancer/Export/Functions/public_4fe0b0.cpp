#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fe0b0, internal_4fe0b0, public_4fe0b0);
extern "C" NAKED register_t __cdecl internal_4fe0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da4cc]
        mov dword ptr ds : [public_674fa8], eax
        ret 
        UNREACHABLE_TRAP(0x4fe0b0)
    }
}
