#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff3c, internal_6d5ff3c, public_6d5ff3c);
extern "C" NAKED register_t __cdecl internal_6d5ff3c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6451c]
        UNREACHABLE_TRAP(0x6d5ff3c)
    }
}
