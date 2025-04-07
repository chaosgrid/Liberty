#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd08, internal_6d5fd08, public_6d5fd08);
extern "C" NAKED register_t __cdecl internal_6d5fd08()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6403c]
        UNREACHABLE_TRAP(0x6d5fd08)
    }
}
