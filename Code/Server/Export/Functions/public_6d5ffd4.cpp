#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffd4, internal_6d5ffd4, public_6d5ffd4);
extern "C" NAKED register_t __cdecl internal_6d5ffd4()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64ad8]
        UNREACHABLE_TRAP(0x6d5ffd4)
    }
}
