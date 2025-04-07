#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd0e, internal_6d5fd0e, public_6d5fd0e);
extern "C" NAKED register_t __cdecl internal_6d5fd0e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64040]
        UNREACHABLE_TRAP(0x6d5fd0e)
    }
}
