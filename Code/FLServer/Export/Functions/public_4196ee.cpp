#include "FLServer-PCH.h"

PROC_DECLARE(0x4196ee, internal_4196ee, public_4196ee);
extern "C" NAKED register_t __cdecl internal_4196ee()
{
    __asm
    {
        jmp dword ptr ds : [public_41b184]
        UNREACHABLE_TRAP(0x4196ee)
    }
}
