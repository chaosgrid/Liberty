#include "FLServer-PCH.h"

PROC_DECLARE(0x4189b4, internal_4189b4, public_4189b4);
extern "C" NAKED register_t __cdecl internal_4189b4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b314]
        UNREACHABLE_TRAP(0x4189b4)
    }
}
