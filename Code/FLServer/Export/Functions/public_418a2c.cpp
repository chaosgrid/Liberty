#include "FLServer-PCH.h"

PROC_DECLARE(0x418a2c, internal_418a2c, public_418a2c);
extern "C" NAKED register_t __cdecl internal_418a2c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b364]
        UNREACHABLE_TRAP(0x418a2c)
    }
}
