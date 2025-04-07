#include "FLServer-PCH.h"

PROC_DECLARE(0x418e5e, internal_418e5e, public_418e5e);
extern "C" NAKED register_t __cdecl internal_418e5e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b63c]
        UNREACHABLE_TRAP(0x418e5e)
    }
}
