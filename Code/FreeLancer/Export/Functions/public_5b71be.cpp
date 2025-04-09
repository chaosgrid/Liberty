#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71be, internal_5b71be, public_5b71be);
extern "C" NAKED register_t __cdecl internal_5b71be()
{
    __asm
    {
        jmp dword ptr ds : [public_5c672c]
        UNREACHABLE_TRAP(0x5b71be)
    }
}
