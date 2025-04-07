#include "FLServer-PCH.h"

PROC_DECLARE(0x40db20, internal_40db20, public_40db20);
extern "C" NAKED register_t __cdecl internal_40db20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d494]
        mov dword ptr ds : [public_42787c], eax
        ret 
        UNREACHABLE_TRAP(0x40db20)
    }
}
