#include "FLServer-PCH.h"

PROC_DECLARE(0x417dd0, internal_417dd0, public_417dd0);
extern "C" NAKED register_t __cdecl internal_417dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e84c]
        mov dword ptr ds : [public_429dfc], eax
        ret 
        UNREACHABLE_TRAP(0x417dd0)
    }
}
