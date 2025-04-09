#include "Freelancer-PCH.h"

PROC_DECLARE(0x59e8b0, internal_59e8b0, public_59e8b0);
extern "C" NAKED register_t __cdecl internal_59e8b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e20]
        mov dword ptr ds : [public_67dd08], eax
        ret 
        UNREACHABLE_TRAP(0x59e8b0)
    }
}
