#include "FLServer-PCH.h"

PROC_DECLARE(0x40dcc0, internal_40dcc0, public_40dcc0);
extern "C" NAKED register_t __cdecl internal_40dcc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b770]
        ret 
        UNREACHABLE_TRAP(0x40dcc0)
    }
}
