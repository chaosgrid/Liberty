#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffe0, internal_6d5ffe0, public_6d5ffe0);
extern "C" NAKED register_t __cdecl internal_6d5ffe0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64af0]
        UNREACHABLE_TRAP(0x6d5ffe0)
    }
}
