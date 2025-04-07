#include "FLServer-PCH.h"

PROC_DECLARE(0x418e10, internal_418e10, public_418e10);
extern "C" NAKED register_t __cdecl internal_418e10()
{
    __asm
    {
        jmp dword ptr ds : [public_41b608]
        UNREACHABLE_TRAP(0x418e10)
    }
}
