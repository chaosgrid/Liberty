#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd6e, internal_6d5fd6e, public_6d5fd6e);
extern "C" NAKED register_t __cdecl internal_6d5fd6e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64080]
        UNREACHABLE_TRAP(0x6d5fd6e)
    }
}
