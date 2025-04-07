#include "FLServer-PCH.h"

PROC_DECLARE(0x40dbf0, internal_40dbf0, public_40dbf0);
extern "C" NAKED register_t __cdecl internal_40dbf0()
{
    __asm
    {
        push 0
        push 0
        push 0
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [public_427870], eax
        ret 
        UNREACHABLE_TRAP(0x40dbf0)
    }
}
