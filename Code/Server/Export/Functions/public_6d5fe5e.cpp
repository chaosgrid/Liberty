#include "Server-PCH.h"

PROC_DECLARE(0x6d5fe5e, internal_6d5fe5e, public_6d5fe5e);
extern "C" NAKED register_t __cdecl internal_6d5fe5e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64120]
        UNREACHABLE_TRAP(0x6d5fe5e)
    }
}
