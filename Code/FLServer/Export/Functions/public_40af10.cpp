#include "FLServer-PCH.h"

PROC_DECLARE(0x40af10, internal_40af10, public_40af10);
extern "C" NAKED register_t __cdecl internal_40af10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_4277d8]
        push eax
        call dword ptr ds : [public_41b1a4]
        ret 
        UNREACHABLE_TRAP(0x40af10)
    }
}
