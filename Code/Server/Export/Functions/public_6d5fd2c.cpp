#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd2c, internal_6d5fd2c, public_6d5fd2c);
extern "C" NAKED register_t __cdecl internal_6d5fd2c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64054]
        UNREACHABLE_TRAP(0x6d5fd2c)
    }
}
