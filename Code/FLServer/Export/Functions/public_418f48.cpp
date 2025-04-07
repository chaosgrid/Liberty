#include "FLServer-PCH.h"

PROC_DECLARE(0x418f48, internal_418f48, public_418f48);
extern "C" NAKED register_t __cdecl internal_418f48()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6e0]
        UNREACHABLE_TRAP(0x418f48)
    }
}
