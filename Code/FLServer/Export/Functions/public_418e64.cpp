#include "FLServer-PCH.h"

PROC_DECLARE(0x418e64, internal_418e64, public_418e64);
extern "C" NAKED register_t __cdecl internal_418e64()
{
    __asm
    {
        jmp dword ptr ds : [public_41b640]
        UNREACHABLE_TRAP(0x418e64)
    }
}
