#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe7c, internal_6d5fe7c, public_6d5fe7c);
extern "C" NAKED register_t __cdecl internal_6d5fe7c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64134]
        UNREACHABLE_TRAP(0x6d5fe7c)
    }
}
