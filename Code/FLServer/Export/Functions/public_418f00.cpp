#include "FLServer-PCH.h"

PROC_DECLARE(0x418f00, internal_418f00, public_418f00);
extern "C" NAKED register_t __cdecl internal_418f00()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6a8]
        UNREACHABLE_TRAP(0x418f00)
    }
}
