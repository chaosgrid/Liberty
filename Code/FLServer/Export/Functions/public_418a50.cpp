#include "FLServer-PCH.h"

PROC_DECLARE(0x418a50, internal_418a50, public_418a50);
extern "C" NAKED register_t __cdecl internal_418a50()
{
    __asm
    {
        jmp dword ptr ds : [public_41b37c]
        UNREACHABLE_TRAP(0x418a50)
    }
}
