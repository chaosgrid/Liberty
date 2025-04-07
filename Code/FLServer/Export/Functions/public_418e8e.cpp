#include "FLServer-PCH.h"

PROC_DECLARE(0x418e8e, internal_418e8e, public_418e8e);
extern "C" NAKED register_t __cdecl internal_418e8e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b65c]
        UNREACHABLE_TRAP(0x418e8e)
    }
}
