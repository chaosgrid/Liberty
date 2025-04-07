#include "FLServer-PCH.h"

PROC_DECLARE(0x418ff0, internal_418ff0, public_418ff0);
extern "C" NAKED register_t __cdecl internal_418ff0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b750]
        UNREACHABLE_TRAP(0x418ff0)
    }
}
