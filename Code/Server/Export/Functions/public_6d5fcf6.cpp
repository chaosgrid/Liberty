#include "Server-PCH.h"

PROC_DECLARE(0x6d5fcf6, internal_6d5fcf6, public_6d5fcf6);
extern "C" NAKED register_t __cdecl internal_6d5fcf6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64010]
        UNREACHABLE_TRAP(0x6d5fcf6)
    }
}
