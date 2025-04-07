#include "FLServer-PCH.h"

PROC_DECLARE(0x418a08, internal_418a08, public_418a08);
extern "C" NAKED register_t __cdecl internal_418a08()
{
    __asm
    {
        jmp dword ptr ds : [public_41b34c]
        UNREACHABLE_TRAP(0x418a08)
    }
}
