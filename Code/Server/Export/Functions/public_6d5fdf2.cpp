#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdf2, internal_6d5fdf2, public_6d5fdf2);
extern "C" NAKED register_t __cdecl internal_6d5fdf2()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640d8]
        UNREACHABLE_TRAP(0x6d5fdf2)
    }
}
