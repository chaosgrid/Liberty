#include "FLServer-PCH.h"

PROC_DECLARE(0x418f54, internal_418f54, public_418f54);
extern "C" NAKED register_t __cdecl internal_418f54()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6e8]
        UNREACHABLE_TRAP(0x418f54)
    }
}
