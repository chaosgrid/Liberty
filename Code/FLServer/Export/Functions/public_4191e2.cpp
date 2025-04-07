#include "FLServer-PCH.h"

PROC_DECLARE(0x4191e2, internal_4191e2, public_4191e2);
extern "C" NAKED register_t __cdecl internal_4191e2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b264]
        UNREACHABLE_TRAP(0x4191e2)
    }
}
