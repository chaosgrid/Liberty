#include "FLServer-PCH.h"

PROC_DECLARE(0x418e22, internal_418e22, public_418e22);
extern "C" NAKED register_t __cdecl internal_418e22()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1c8]
        UNREACHABLE_TRAP(0x418e22)
    }
}
