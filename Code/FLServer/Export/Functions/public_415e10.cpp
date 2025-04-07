#include "FLServer-PCH.h"

PROC_DECLARE(0x415e10, internal_415e10, public_415e10);
extern "C" NAKED register_t __cdecl internal_415e10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e704]
        mov dword ptr ds : [public_429d94], eax
        ret 
        UNREACHABLE_TRAP(0x415e10)
    }
}
