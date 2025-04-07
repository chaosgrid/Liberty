#include "FLServer-PCH.h"

PROC_DECLARE(0x418a1a, internal_418a1a, public_418a1a);
extern "C" NAKED register_t __cdecl internal_418a1a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b358]
        UNREACHABLE_TRAP(0x418a1a)
    }
}
