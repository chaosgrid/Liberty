#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe64, internal_6d5fe64, public_6d5fe64);
extern "C" NAKED register_t __cdecl internal_6d5fe64()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64124]
        UNREACHABLE_TRAP(0x6d5fe64)
    }
}
