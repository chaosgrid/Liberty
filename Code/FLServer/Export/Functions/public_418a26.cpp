#include "FLServer-PCH.h"

PROC_DECLARE(0x418a26, internal_418a26, public_418a26);
extern "C" NAKED register_t __cdecl internal_418a26()
{
    __asm
    {
        jmp dword ptr ds : [public_41b360]
        UNREACHABLE_TRAP(0x418a26)
    }
}
