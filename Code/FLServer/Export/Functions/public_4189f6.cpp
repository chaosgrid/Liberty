#include "FLServer-PCH.h"

PROC_DECLARE(0x4189f6, internal_4189f6, public_4189f6);
extern "C" NAKED register_t __cdecl internal_4189f6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b340]
        UNREACHABLE_TRAP(0x4189f6)
    }
}
