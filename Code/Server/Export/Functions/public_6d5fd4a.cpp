#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd4a, internal_6d5fd4a, public_6d5fd4a);
extern "C" NAKED register_t __cdecl internal_6d5fd4a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64068]
        UNREACHABLE_TRAP(0x6d5fd4a)
    }
}
