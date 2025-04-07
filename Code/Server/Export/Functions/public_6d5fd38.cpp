#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd38, internal_6d5fd38, public_6d5fd38);
extern "C" NAKED register_t __cdecl internal_6d5fd38()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6405c]
        UNREACHABLE_TRAP(0x6d5fd38)
    }
}
