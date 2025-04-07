#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff36, internal_6d5ff36, public_6d5ff36);
extern "C" NAKED register_t __cdecl internal_6d5ff36()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64518]
        UNREACHABLE_TRAP(0x6d5ff36)
    }
}
