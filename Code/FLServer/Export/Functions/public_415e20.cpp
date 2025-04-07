#include "FLServer-PCH.h"

PROC_DECLARE(0x415e20, internal_415e20, public_415e20);
extern "C" NAKED register_t __cdecl internal_415e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e708]
        mov dword ptr ds : [public_429580], eax
        ret 
        UNREACHABLE_TRAP(0x415e20)
    }
}
