#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffc2, internal_6d5ffc2, public_6d5ffc2);
extern "C" NAKED register_t __cdecl internal_6d5ffc2()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64ab4]
        UNREACHABLE_TRAP(0x6d5ffc2)
    }
}
