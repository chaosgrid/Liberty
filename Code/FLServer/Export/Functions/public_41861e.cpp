#include "FLServer-PCH.h"

PROC_DECLARE(0x41861e, internal_41861e, public_41861e);
extern "C" NAKED register_t __cdecl internal_41861e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b080]
        UNREACHABLE_TRAP(0x41861e)
    }
}
