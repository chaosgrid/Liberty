#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffc8, internal_6d5ffc8, public_6d5ffc8);
extern "C" NAKED register_t __cdecl internal_6d5ffc8()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64ab8]
        UNREACHABLE_TRAP(0x6d5ffc8)
    }
}
