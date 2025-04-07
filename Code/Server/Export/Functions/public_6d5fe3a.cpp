#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe3a, internal_6d5fe3a, public_6d5fe3a);
extern "C" NAKED register_t __cdecl internal_6d5fe3a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64108]
        UNREACHABLE_TRAP(0x6d5fe3a)
    }
}
