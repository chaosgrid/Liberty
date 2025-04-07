#include "FLServer-PCH.h"

PROC_DECLARE(0x418a0e, internal_418a0e, public_418a0e);
extern "C" NAKED register_t __cdecl internal_418a0e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b350]
        UNREACHABLE_TRAP(0x418a0e)
    }
}
