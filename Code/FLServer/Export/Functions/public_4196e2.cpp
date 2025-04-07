#include "FLServer-PCH.h"

PROC_DECLARE(0x4196e2, internal_4196e2, public_4196e2);
extern "C" NAKED register_t __cdecl internal_4196e2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b18c]
        UNREACHABLE_TRAP(0x4196e2)
    }
}
