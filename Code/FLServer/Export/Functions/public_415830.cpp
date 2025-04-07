#include "FLServer-PCH.h"

PROC_DECLARE(0x415830, internal_415830, public_415830);
extern "C" NAKED register_t __cdecl internal_415830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e4c4]
        mov dword ptr ds : [public_429534], eax
        ret 
        UNREACHABLE_TRAP(0x415830)
    }
}
