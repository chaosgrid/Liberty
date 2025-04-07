#include "FLServer-PCH.h"

PROC_DECLARE(0x417df0, internal_417df0, public_417df0);
extern "C" NAKED register_t __cdecl internal_417df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41e850]
        mov dword ptr ds : [public_429df8], eax
        ret 
        UNREACHABLE_TRAP(0x417df0)
    }
}
