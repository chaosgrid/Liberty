#include "FLServer-PCH.h"

PROC_DECLARE(0x418a5c, internal_418a5c, public_418a5c);
extern "C" NAKED register_t __cdecl internal_418a5c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b384]
        UNREACHABLE_TRAP(0x418a5c)
    }
}
