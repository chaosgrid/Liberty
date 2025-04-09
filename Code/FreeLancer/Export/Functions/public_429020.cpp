#include "FreeLancer-PCH.h"

PROC_DECLARE(0x429020, internal_429020, public_429020);
extern "C" NAKED register_t __cdecl internal_429020()
{
    __asm
    {
        mov dword ptr ds : [public_667c58], 0x7F7FFFFF
        ret 
        UNREACHABLE_TRAP(0x429020)
    }
}
