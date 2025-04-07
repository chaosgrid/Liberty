#include "FLServer-PCH.h"

PROC_DECLARE(0x415690, internal_415690, public_415690);
extern "C" NAKED register_t __cdecl internal_415690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e3bc]
        mov dword ptr ds : [public_429518], eax
        ret 
        UNREACHABLE_TRAP(0x415690)
    }
}
