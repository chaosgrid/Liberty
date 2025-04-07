#include "FLServer-PCH.h"

PROC_DECLARE(0x41973c, internal_41973c, public_41973c);
extern "C" NAKED register_t __cdecl internal_41973c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b150]
        UNREACHABLE_TRAP(0x41973c)
    }
}
