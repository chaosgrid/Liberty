#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffe6, internal_6d5ffe6, public_6d5ffe6);
extern "C" NAKED register_t __cdecl internal_6d5ffe6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64af4]
        UNREACHABLE_TRAP(0x6d5ffe6)
    }
}
