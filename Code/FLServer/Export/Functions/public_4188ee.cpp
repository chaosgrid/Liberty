#include "FLServer-PCH.h"

PROC_DECLARE(0x4188ee, internal_4188ee, public_4188ee);
extern "C" NAKED register_t __cdecl internal_4188ee()
{
    __asm
    {
        jmp dword ptr ds : [public_41bae4]
        UNREACHABLE_TRAP(0x4188ee)
    }
}
