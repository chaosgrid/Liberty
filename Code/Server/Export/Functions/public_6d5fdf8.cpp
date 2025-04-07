#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdf8, internal_6d5fdf8, public_6d5fdf8);
extern "C" NAKED register_t __cdecl internal_6d5fdf8()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640dc]
        UNREACHABLE_TRAP(0x6d5fdf8)
    }
}
