#include "FLServer-PCH.h"

PROC_DECLARE(0x418e52, internal_418e52, public_418e52);
extern "C" NAKED register_t __cdecl internal_418e52()
{
    __asm
    {
        jmp dword ptr ds : [public_41b634]
        UNREACHABLE_TRAP(0x418e52)
    }
}
