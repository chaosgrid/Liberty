#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd3e, internal_6d5fd3e, public_6d5fd3e);
extern "C" NAKED register_t __cdecl internal_6d5fd3e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64060]
        UNREACHABLE_TRAP(0x6d5fd3e)
    }
}
