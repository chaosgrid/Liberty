#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff42, internal_6d5ff42, public_6d5ff42);
extern "C" NAKED register_t __cdecl internal_6d5ff42()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64520]
        UNREACHABLE_TRAP(0x6d5ff42)
    }
}
