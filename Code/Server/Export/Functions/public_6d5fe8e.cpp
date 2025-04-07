#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe8e, internal_6d5fe8e, public_6d5fe8e);
extern "C" NAKED register_t __cdecl internal_6d5fe8e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64140]
        UNREACHABLE_TRAP(0x6d5fe8e)
    }
}
