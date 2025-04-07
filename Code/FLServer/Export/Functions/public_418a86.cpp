#include "FLServer-PCH.h"

PROC_DECLARE(0x418a86, internal_418a86, public_418a86);
extern "C" NAKED register_t __cdecl internal_418a86()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3a0]
        UNREACHABLE_TRAP(0x418a86)
    }
}
