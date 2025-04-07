#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd50, internal_6d5fd50, public_6d5fd50);
extern "C" NAKED register_t __cdecl internal_6d5fd50()
{
    __asm
    {
        jmp dword ptr ds : [public_6d6406c]
        UNREACHABLE_TRAP(0x6d5fd50)
    }
}
