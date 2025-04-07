#include "Server-PCH.h"

PROC_DECLARE(0x6d5eea0, internal_6d5eea0, public_6d5eea0);
extern "C" NAKED register_t __cdecl internal_6d5eea0()
{
    __asm
    {
        jmp dword ptr ds : [public_6d643b4]
        UNREACHABLE_TRAP(0x6d5eea0)
    }
}
