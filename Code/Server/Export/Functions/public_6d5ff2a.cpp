#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff2a, internal_6d5ff2a, public_6d5ff2a);
extern "C" NAKED register_t __cdecl internal_6d5ff2a()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64510]
        UNREACHABLE_TRAP(0x6d5ff2a)
    }
}
