#include "FLServer-PCH.h"

PROC_DECLARE(0x418630, internal_418630, public_418630);
extern "C" NAKED register_t __cdecl internal_418630()
{
    __asm
    {
        jmp dword ptr ds : [public_41b078]
        UNREACHABLE_TRAP(0x418630)
    }
}
