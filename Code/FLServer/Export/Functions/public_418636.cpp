#include "FLServer-PCH.h"

PROC_DECLARE(0x418636, internal_418636, public_418636);
extern "C" NAKED register_t __cdecl internal_418636()
{
    __asm
    {
        jmp dword ptr ds : [public_41b074]
        UNREACHABLE_TRAP(0x418636)
    }
}
