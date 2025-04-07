#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd14, internal_6d5fd14, public_6d5fd14);
extern "C" NAKED register_t __cdecl internal_6d5fd14()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64044]
        UNREACHABLE_TRAP(0x6d5fd14)
    }
}
