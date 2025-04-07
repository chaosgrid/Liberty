#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdd4, internal_6d5fdd4, public_6d5fdd4);
extern "C" NAKED register_t __cdecl internal_6d5fdd4()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640c4]
        UNREACHABLE_TRAP(0x6d5fdd4)
    }
}
