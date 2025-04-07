#include "FLServer-PCH.h"

PROC_DECLARE(0x40db30, internal_40db30, public_40db30);
extern "C" NAKED register_t __cdecl internal_40db30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d498]
        mov dword ptr ds : [public_427868], eax
        ret 
        UNREACHABLE_TRAP(0x40db30)
    }
}
