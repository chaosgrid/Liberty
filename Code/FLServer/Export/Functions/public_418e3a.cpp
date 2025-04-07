#include "FLServer-PCH.h"

PROC_DECLARE(0x418e3a, internal_418e3a, public_418e3a);
extern "C" NAKED register_t __cdecl internal_418e3a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b624]
        UNREACHABLE_TRAP(0x418e3a)
    }
}
