#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdc8, internal_6d5fdc8, public_6d5fdc8);
extern "C" NAKED register_t __cdecl internal_6d5fdc8()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640bc]
        UNREACHABLE_TRAP(0x6d5fdc8)
    }
}
