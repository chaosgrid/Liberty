#include "Common-PCH.h"

PROC_DECLARE(0x62df400, internal_62df400, public_62df400);
extern "C" NAKED register_t __cdecl internal_62df400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a0628]
        mov dword ptr ds : [public_63fca20], eax
        ret 
        UNREACHABLE_TRAP(0x62df400)
    }
}
