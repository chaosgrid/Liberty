#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b712e, internal_5b712e, public_5b712e);
extern "C" NAKED register_t __cdecl internal_5b712e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66cc]
        UNREACHABLE_TRAP(0x5b712e)
    }
}
