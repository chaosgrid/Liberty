#include "FLServer-PCH.h"

PROC_DECLARE(0x418a02, internal_418a02, public_418a02);
extern "C" NAKED register_t __cdecl internal_418a02()
{
    __asm
    {
        jmp dword ptr ds : [public_41b348]
        UNREACHABLE_TRAP(0x418a02)
    }
}
