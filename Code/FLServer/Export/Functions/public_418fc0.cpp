#include "FLServer-PCH.h"

PROC_DECLARE(0x418fc0, internal_418fc0, public_418fc0);
extern "C" NAKED register_t __cdecl internal_418fc0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b730]
        UNREACHABLE_TRAP(0x418fc0)
    }
}
