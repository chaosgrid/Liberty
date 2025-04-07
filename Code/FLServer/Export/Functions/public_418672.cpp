#include "FLServer-PCH.h"

PROC_DECLARE(0x418672, internal_418672, public_418672);
extern "C" NAKED register_t __cdecl internal_418672()
{
    __asm
    {
        jmp dword ptr ds : [public_41b038]
        UNREACHABLE_TRAP(0x418672)
    }
}
