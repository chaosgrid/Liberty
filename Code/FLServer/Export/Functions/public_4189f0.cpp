#include "FLServer-PCH.h"

PROC_DECLARE(0x4189f0, internal_4189f0, public_4189f0);
extern "C" NAKED register_t __cdecl internal_4189f0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b33c]
        UNREACHABLE_TRAP(0x4189f0)
    }
}
