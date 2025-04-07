#include "FLServer-PCH.h"

PROC_DECLARE(0x418a74, internal_418a74, public_418a74);
extern "C" NAKED register_t __cdecl internal_418a74()
{
    __asm
    {
        jmp dword ptr ds : [public_41b394]
        UNREACHABLE_TRAP(0x418a74)
    }
}
