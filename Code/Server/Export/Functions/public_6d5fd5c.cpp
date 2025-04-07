#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd5c, internal_6d5fd5c, public_6d5fd5c);
extern "C" NAKED register_t __cdecl internal_6d5fd5c()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64074]
        UNREACHABLE_TRAP(0x6d5fd5c)
    }
}
