#include "FLServer-PCH.h"

PROC_DECLARE(0x418e16, internal_418e16, public_418e16);
extern "C" NAKED register_t __cdecl internal_418e16()
{
    __asm
    {
        jmp dword ptr ds : [public_41b60c]
        UNREACHABLE_TRAP(0x418e16)
    }
}
