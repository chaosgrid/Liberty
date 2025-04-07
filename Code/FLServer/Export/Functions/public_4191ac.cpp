#include "FLServer-PCH.h"

PROC_DECLARE(0x4191ac, internal_4191ac, public_4191ac);
extern "C" NAKED register_t __cdecl internal_4191ac()
{
    __asm
    {
        jmp dword ptr ds : [public_41b288]
        UNREACHABLE_TRAP(0x4191ac)
    }
}
