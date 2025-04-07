#include "FLServer-PCH.h"

PROC_DECLARE(0x411c00, internal_411c00, public_411c00);
extern "C" NAKED register_t __cdecl internal_411c00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dd04]
        mov dword ptr ds : [public_427d00], eax
        ret 
        UNREACHABLE_TRAP(0x411c00)
    }
}
