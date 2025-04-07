#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd8c, internal_6d5fd8c, public_6d5fd8c);
extern "C" NAKED register_t __cdecl internal_6d5fd8c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64094]
        UNREACHABLE_TRAP(0x6d5fd8c)
    }
}
