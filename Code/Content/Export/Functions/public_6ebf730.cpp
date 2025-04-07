#include "Content-PCH.h"

PROC_DECLARE(0x6ebf730, internal_6ebf730, public_6ebf730);
extern "C" NAKED register_t __cdecl internal_6ebf730()
{
    __asm
    {
        push 0
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcefc8], eax
        ret 
        UNREACHABLE_TRAP(0x6ebf730)
    }
}
