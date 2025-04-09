#include "Freelancer-PCH.h"

PROC_DECLARE(0x53ec10, internal_53ec10, public_53ec10);
extern "C" NAKED register_t __cdecl internal_53ec10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df818]
        mov dword ptr ds : [public_678a20], eax
        ret 
        UNREACHABLE_TRAP(0x53ec10)
    }
}
