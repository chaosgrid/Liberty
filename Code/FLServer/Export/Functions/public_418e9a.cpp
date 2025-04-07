#include "FLServer-PCH.h"

PROC_DECLARE(0x418e9a, internal_418e9a, public_418e9a);
extern "C" NAKED register_t __cdecl internal_418e9a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b664]
        UNREACHABLE_TRAP(0x418e9a)
    }
}
