#include "FLServer-PCH.h"

PROC_DECLARE(0x418e88, internal_418e88, public_418e88);
extern "C" NAKED register_t __cdecl internal_418e88()
{
    __asm
    {
        jmp dword ptr ds : [public_41b658]
        UNREACHABLE_TRAP(0x418e88)
    }
}
