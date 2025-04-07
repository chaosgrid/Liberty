#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd68, internal_6d5fd68, public_6d5fd68);
extern "C" NAKED register_t __cdecl internal_6d5fd68()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6407c]
        UNREACHABLE_TRAP(0x6d5fd68)
    }
}
