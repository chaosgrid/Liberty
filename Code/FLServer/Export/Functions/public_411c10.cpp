#include "FLServer-PCH.h"

PROC_DECLARE(0x411c10, internal_411c10, public_411c10);
extern "C" NAKED register_t __cdecl internal_411c10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dd08]
        mov dword ptr ds : [public_427cf0], eax
        ret 
        UNREACHABLE_TRAP(0x411c10)
    }
}
