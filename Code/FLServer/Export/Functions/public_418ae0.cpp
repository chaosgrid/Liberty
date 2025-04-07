#include "FLServer-PCH.h"

PROC_DECLARE(0x418ae0, internal_418ae0, public_418ae0);
extern "C" NAKED register_t __cdecl internal_418ae0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3e0]
        UNREACHABLE_TRAP(0x418ae0)
    }
}
