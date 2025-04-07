#include "FLServer-PCH.h"

PROC_DECLARE(0x418f78, internal_418f78, public_418f78);
extern "C" NAKED register_t __cdecl internal_418f78()
{
    __asm
    {
        jmp dword ptr ds : [public_41b700]
        UNREACHABLE_TRAP(0x418f78)
    }
}
