#include "FLServer-PCH.h"

PROC_DECLARE(0x418b82, internal_418b82, public_418b82);
extern "C" NAKED register_t __cdecl internal_418b82()
{
    __asm
    {
        jmp dword ptr ds : [public_41b44c]
        UNREACHABLE_TRAP(0x418b82)
    }
}
