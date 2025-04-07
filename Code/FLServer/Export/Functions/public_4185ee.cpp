#include "FLServer-PCH.h"

PROC_DECLARE(0x4185ee, internal_4185ee, public_4185ee);
extern "C" NAKED register_t __cdecl internal_4185ee()
{
    __asm
    {
        jmp dword ptr ds : [public_41b060]
        UNREACHABLE_TRAP(0x4185ee)
    }
}
