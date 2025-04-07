#include "FLServer-PCH.h"

PROC_DECLARE(0x418e1c, internal_418e1c, public_418e1c);
extern "C" NAKED register_t __cdecl internal_418e1c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b610]
        UNREACHABLE_TRAP(0x418e1c)
    }
}
