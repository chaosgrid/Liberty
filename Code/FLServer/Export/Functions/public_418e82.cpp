#include "FLServer-PCH.h"

PROC_DECLARE(0x418e82, internal_418e82, public_418e82);
extern "C" NAKED register_t __cdecl internal_418e82()
{
    __asm
    {
        jmp dword ptr ds : [public_41b654]
        UNREACHABLE_TRAP(0x418e82)
    }
}
