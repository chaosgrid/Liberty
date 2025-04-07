#include "FLServer-PCH.h"

PROC_DECLARE(0x407400, internal_407400, public_407400);
extern "C" NAKED register_t __cdecl internal_407400()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c8e8]
        mov dword ptr ds : [public_426248], eax
        ret 
        UNREACHABLE_TRAP(0x407400)
    }
}
