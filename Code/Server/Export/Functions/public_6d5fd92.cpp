#include "Server-PCH.h"

PROC_DECLARE(0x6d5fd92, internal_6d5fd92, public_6d5fd92);
extern "C" NAKED register_t __cdecl internal_6d5fd92()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64098]
        UNREACHABLE_TRAP(0x6d5fd92)
    }
}
