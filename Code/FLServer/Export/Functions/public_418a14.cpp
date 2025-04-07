#include "FLServer-PCH.h"

PROC_DECLARE(0x418a14, internal_418a14, public_418a14);
extern "C" NAKED register_t __cdecl internal_418a14()
{
    __asm
    {
        jmp dword ptr ds : [public_41b354]
        UNREACHABLE_TRAP(0x418a14)
    }
}
