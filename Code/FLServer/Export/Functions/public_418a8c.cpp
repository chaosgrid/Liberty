#include "FLServer-PCH.h"

PROC_DECLARE(0x418a8c, internal_418a8c, public_418a8c);
extern "C" NAKED register_t __cdecl internal_418a8c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3a4]
        UNREACHABLE_TRAP(0x418a8c)
    }
}
