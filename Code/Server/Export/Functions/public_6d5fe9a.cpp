#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe9a, internal_6d5fe9a, public_6d5fe9a);
extern "C" NAKED register_t __cdecl internal_6d5fe9a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64148]
        UNREACHABLE_TRAP(0x6d5fe9a)
    }
}
