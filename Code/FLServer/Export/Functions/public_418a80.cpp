#include "FLServer-PCH.h"

PROC_DECLARE(0x418a80, internal_418a80, public_418a80);
extern "C" NAKED register_t __cdecl internal_418a80()
{
    __asm
    {
        jmp dword ptr ds : [public_41b39c]
        UNREACHABLE_TRAP(0x418a80)
    }
}
