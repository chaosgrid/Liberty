#include "FLServer-PCH.h"

PROC_DECLARE(0x411bf0, internal_411bf0, public_411bf0);
extern "C" NAKED register_t __cdecl internal_411bf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41dd04]
        mov dword ptr ds : [public_427cf4], eax
        ret 
        UNREACHABLE_TRAP(0x411bf0)
    }
}
