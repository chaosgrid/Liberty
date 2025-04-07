#include "FLServer-PCH.h"

PROC_DECLARE(0x40db10, internal_40db10, public_40db10);
extern "C" NAKED register_t __cdecl internal_40db10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d494]
        mov dword ptr ds : [public_42786c], eax
        ret 
        UNREACHABLE_TRAP(0x40db10)
    }
}
