#include "FLServer-PCH.h"

PROC_DECLARE(0x418e34, internal_418e34, public_418e34);
extern "C" NAKED register_t __cdecl internal_418e34()
{
    __asm
    {
        jmp dword ptr ds : [public_41b620]
        UNREACHABLE_TRAP(0x418e34)
    }
}
