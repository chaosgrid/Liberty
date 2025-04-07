#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd1a, internal_6d5fd1a, public_6d5fd1a);
extern "C" NAKED register_t __cdecl internal_6d5fd1a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64048]
        UNREACHABLE_TRAP(0x6d5fd1a)
    }
}
