#include "FLServer-PCH.h"

PROC_DECLARE(0x418684, internal_418684, public_418684);
extern "C" NAKED register_t __cdecl internal_418684()
{
    __asm
    {
        jmp dword ptr ds : [public_41b02c]
        UNREACHABLE_TRAP(0x418684)
    }
}
