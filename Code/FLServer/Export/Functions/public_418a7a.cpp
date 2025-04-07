#include "FLServer-PCH.h"

PROC_DECLARE(0x418a7a, internal_418a7a, public_418a7a);
extern "C" NAKED register_t __cdecl internal_418a7a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b398]
        UNREACHABLE_TRAP(0x418a7a)
    }
}
