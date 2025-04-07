#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff0c, internal_6d5ff0c, public_6d5ff0c);
extern "C" NAKED register_t __cdecl internal_6d5ff0c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64434]
        UNREACHABLE_TRAP(0x6d5ff0c)
    }
}
