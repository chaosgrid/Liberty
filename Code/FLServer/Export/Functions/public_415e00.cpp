#include "FLServer-PCH.h"

PROC_DECLARE(0x415e00, internal_415e00, public_415e00);
extern "C" NAKED register_t __cdecl internal_415e00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e704]
        mov dword ptr ds : [public_429588], eax
        ret 
        UNREACHABLE_TRAP(0x415e00)
    }
}
