#include "FLServer-PCH.h"

PROC_DECLARE(0x418f4e, internal_418f4e, public_418f4e);
extern "C" NAKED register_t __cdecl internal_418f4e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6e4]
        UNREACHABLE_TRAP(0x418f4e)
    }
}
