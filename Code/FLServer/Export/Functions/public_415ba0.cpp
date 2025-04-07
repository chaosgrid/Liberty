#include "FLServer-PCH.h"

PROC_DECLARE(0x415ba0, internal_415ba0, public_415ba0);
extern "C" NAKED register_t __cdecl internal_415ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e5d0]
        mov dword ptr ds : [public_429558], eax
        ret 
        UNREACHABLE_TRAP(0x415ba0)
    }
}
