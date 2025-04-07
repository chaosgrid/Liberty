#include "FLServer-PCH.h"

PROC_DECLARE(0x418732, internal_418732, public_418732);
extern "C" NAKED register_t __cdecl internal_418732()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb48]
        UNREACHABLE_TRAP(0x418732)
    }
}
