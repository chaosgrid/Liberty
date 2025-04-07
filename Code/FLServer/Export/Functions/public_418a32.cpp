#include "FLServer-PCH.h"

PROC_DECLARE(0x418a32, internal_418a32, public_418a32);
extern "C" NAKED register_t __cdecl internal_418a32()
{
    __asm
    {
        jmp dword ptr ds : [public_41b368]
        UNREACHABLE_TRAP(0x418a32)
    }
}
