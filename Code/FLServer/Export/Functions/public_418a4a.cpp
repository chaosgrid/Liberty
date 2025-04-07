#include "FLServer-PCH.h"

PROC_DECLARE(0x418a4a, internal_418a4a, public_418a4a);
extern "C" NAKED register_t __cdecl internal_418a4a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b378]
        UNREACHABLE_TRAP(0x418a4a)
    }
}
