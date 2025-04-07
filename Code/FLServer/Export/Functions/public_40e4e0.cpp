#include "FLServer-PCH.h"

PROC_DECLARE(0x40e4e0, internal_40e4e0, public_40e4e0);
extern "C" NAKED register_t __cdecl internal_40e4e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41d698]
        mov dword ptr ds : [public_427ca0], eax
        ret 
        UNREACHABLE_TRAP(0x40e4e0)
    }
}
