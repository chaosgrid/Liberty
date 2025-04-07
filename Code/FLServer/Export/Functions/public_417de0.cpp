#include "FLServer-PCH.h"

PROC_DECLARE(0x417de0, internal_417de0, public_417de0);
extern "C" NAKED register_t __cdecl internal_417de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e84c]
        mov dword ptr ds : [public_429e08], eax
        ret 
        UNREACHABLE_TRAP(0x417de0)
    }
}
