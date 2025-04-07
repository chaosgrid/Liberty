#include "Server-PCH.h"

PROC_DECLARE(0x6d5fee8, internal_6d5fee8, public_6d5fee8);
extern "C" NAKED register_t __cdecl internal_6d5fee8()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6417c]
        UNREACHABLE_TRAP(0x6d5fee8)
    }
}
