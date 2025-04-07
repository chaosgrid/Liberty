#include "Server-PCH.h"

PROC_DECLARE(0x6d5fee2, internal_6d5fee2, public_6d5fee2);
extern "C" NAKED register_t __cdecl internal_6d5fee2()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64178]
        UNREACHABLE_TRAP(0x6d5fee2)
    }
}
