#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd20, internal_6d5fd20, public_6d5fd20);
extern "C" NAKED register_t __cdecl internal_6d5fd20()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6404c]
        UNREACHABLE_TRAP(0x6d5fd20)
    }
}
