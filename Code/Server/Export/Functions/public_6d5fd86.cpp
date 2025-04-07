#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd86, internal_6d5fd86, public_6d5fd86);
extern "C" NAKED register_t __cdecl internal_6d5fd86()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64090]
        UNREACHABLE_TRAP(0x6d5fd86)
    }
}
