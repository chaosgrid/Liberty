#include "Server-PCH.h"

PROC_DECLARE(0x6d5fde0, internal_6d5fde0, public_6d5fde0);
extern "C" NAKED register_t __cdecl internal_6d5fde0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640cc]
        UNREACHABLE_TRAP(0x6d5fde0)
    }
}
