#include "FLServer-PCH.h"

PROC_DECLARE(0x409130, internal_409130, public_409130);
extern "C" NAKED register_t __cdecl internal_409130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41cb64]
        mov dword ptr ds : [public_426ba4], eax
        ret 
        UNREACHABLE_TRAP(0x409130)
    }
}
