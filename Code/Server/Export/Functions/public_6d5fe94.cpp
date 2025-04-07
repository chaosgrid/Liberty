#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe94, internal_6d5fe94, public_6d5fe94);
extern "C" NAKED register_t __cdecl internal_6d5fe94()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64144]
        UNREACHABLE_TRAP(0x6d5fe94)
    }
}
