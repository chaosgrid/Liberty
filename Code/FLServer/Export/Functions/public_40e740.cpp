#include "FLServer-PCH.h"

PROC_DECLARE(0x40e740, internal_40e740, public_40e740);
extern "C" NAKED register_t __cdecl internal_40e740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b7a8]
        ret 
        UNREACHABLE_TRAP(0x40e740)
    }
}
