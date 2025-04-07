#include "FLServer-PCH.h"

PROC_DECLARE(0x418666, internal_418666, public_418666);
extern "C" NAKED register_t __cdecl internal_418666()
{
    __asm
    {
        jmp dword ptr ds : [public_41b09c]
        UNREACHABLE_TRAP(0x418666)
    }
}
