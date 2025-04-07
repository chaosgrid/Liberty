#include "FLServer-PCH.h"

PROC_DECLARE(0x418e04, internal_418e04, public_418e04);
extern "C" NAKED register_t __cdecl internal_418e04()
{
    __asm
    {
        jmp dword ptr ds : [public_41b600]
        UNREACHABLE_TRAP(0x418e04)
    }
}
