#include "Server-PCH.h"

PROC_DECLARE(0x6d5eeb0, internal_6d5eeb0, public_6d5eeb0);
extern "C" NAKED register_t __cdecl internal_6d5eeb0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64a0c]
        UNREACHABLE_TRAP(0x6d5eeb0)
    }
}
