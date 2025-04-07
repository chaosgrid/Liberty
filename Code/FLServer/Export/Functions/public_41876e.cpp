#include "FLServer-PCH.h"

PROC_DECLARE(0x41876e, internal_41876e, public_41876e);
extern "C" NAKED register_t __cdecl internal_41876e()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba58]
        UNREACHABLE_TRAP(0x41876e)
    }
}
