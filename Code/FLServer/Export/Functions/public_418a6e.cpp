#include "FLServer-PCH.h"

PROC_DECLARE(0x418a6e, internal_418a6e, public_418a6e);
extern "C" NAKED register_t __cdecl internal_418a6e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b390]
        UNREACHABLE_TRAP(0x418a6e)
    }
}
