#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdc2, internal_6d5fdc2, public_6d5fdc2);
extern "C" NAKED register_t __cdecl internal_6d5fdc2()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640b8]
        UNREACHABLE_TRAP(0x6d5fdc2)
    }
}
