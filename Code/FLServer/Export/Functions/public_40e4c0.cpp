#include "FLServer-PCH.h"

PROC_DECLARE(0x40e4c0, internal_40e4c0, public_40e4c0);
extern "C" NAKED register_t __cdecl internal_40e4c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d694]
        mov dword ptr ds : [public_427ca4], eax
        ret 
        UNREACHABLE_TRAP(0x40e4c0)
    }
}
