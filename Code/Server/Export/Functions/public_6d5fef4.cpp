#include "Server-PCH.h"

PROC_DECLARE(0x6d5fef4, internal_6d5fef4, public_6d5fef4);
extern "C" NAKED register_t __cdecl internal_6d5fef4()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64184]
        UNREACHABLE_TRAP(0x6d5fef4)
    }
}
