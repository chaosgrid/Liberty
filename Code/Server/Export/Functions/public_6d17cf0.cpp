#include "Server-PCH.h"

PROC_DECLARE(0x6d17cf0, internal_6d17cf0, public_6d17cf0);
extern "C" NAKED register_t __cdecl internal_6d17cf0()
{
    __asm
    {
        mov dword ptr ds : [public_6d8e578], 0
        mov dword ptr ds : [public_6d8e57c], 0
        mov dword ptr ds : [public_6d8e580], 0
        mov dword ptr ds : [public_6d8e584], 0
        ret 
        UNREACHABLE_TRAP(0x6d17cf0)
    }
}
