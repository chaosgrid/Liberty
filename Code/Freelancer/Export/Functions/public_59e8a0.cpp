#include "Freelancer-PCH.h"

PROC_DECLARE(0x59e8a0, internal_59e8a0, public_59e8a0);
extern "C" NAKED register_t __cdecl internal_59e8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e20]
        mov dword ptr ds : [public_67dd0c], eax
        ret 
        UNREACHABLE_TRAP(0x59e8a0)
    }
}
