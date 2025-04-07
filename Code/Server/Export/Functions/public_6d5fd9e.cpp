#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd9e, internal_6d5fd9e, public_6d5fd9e);
extern "C" NAKED register_t __cdecl internal_6d5fd9e()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640a0]
        UNREACHABLE_TRAP(0x6d5fd9e)
    }
}
