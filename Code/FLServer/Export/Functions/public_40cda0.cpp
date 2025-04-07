#include "FLServer-PCH.h"

PROC_DECLARE(0x40cda0, internal_40cda0, public_40cda0);
extern "C" NAKED register_t __cdecl internal_40cda0()
{
    __asm
    {
        push 0
        push 0
        push 0
        call dword ptr ds : [public_41b188]
        mov dword ptr ds : [public_42780c], eax
        ret 
        UNREACHABLE_TRAP(0x40cda0)
    }
}
