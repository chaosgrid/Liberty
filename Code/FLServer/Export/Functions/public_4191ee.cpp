#include "FLServer-PCH.h"

PROC_DECLARE(0x4191ee, internal_4191ee, public_4191ee);
extern "C" NAKED register_t __cdecl internal_4191ee()
{
    __asm
    {
        jmp dword ptr ds : [public_41b25c]
        UNREACHABLE_TRAP(0x4191ee)
    }
}
