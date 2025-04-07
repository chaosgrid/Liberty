#include "FLServer-PCH.h"

PROC_DECLARE(0x418f7e, internal_418f7e, public_418f7e);
extern "C" NAKED register_t __cdecl internal_418f7e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b704]
        UNREACHABLE_TRAP(0x418f7e)
    }
}
