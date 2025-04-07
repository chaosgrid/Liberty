#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff48, internal_6d5ff48, public_6d5ff48);
extern "C" NAKED register_t __cdecl internal_6d5ff48()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64524]
        UNREACHABLE_TRAP(0x6d5ff48)
    }
}
