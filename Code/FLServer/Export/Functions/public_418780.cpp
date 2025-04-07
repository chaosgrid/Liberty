#include "FLServer-PCH.h"

PROC_DECLARE(0x418780, internal_418780, public_418780);
extern "C" NAKED register_t __cdecl internal_418780()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba4c]
        UNREACHABLE_TRAP(0x418780)
    }
}
