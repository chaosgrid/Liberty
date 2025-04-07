#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff5a, internal_6d5ff5a, public_6d5ff5a);
extern "C" NAKED register_t __cdecl internal_6d5ff5a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64530]
        UNREACHABLE_TRAP(0x6d5ff5a)
    }
}
