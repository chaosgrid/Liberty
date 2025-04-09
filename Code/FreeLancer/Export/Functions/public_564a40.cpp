#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564a40, internal_564a40, public_564a40);
extern "C" NAKED register_t __cdecl internal_564a40()
{
    __asm
    {
        mov dword ptr ds : [public_67c1d0], 0
        ret 
        UNREACHABLE_TRAP(0x564a40)
    }
}
