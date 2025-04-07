#include "FLServer-PCH.h"

PROC_DECLARE(0x4193de, internal_4193de, public_4193de);
extern "C" NAKED register_t __cdecl internal_4193de()
{
    __asm
    {
        jmp dword ptr ds : [public_41b968]
        UNREACHABLE_TRAP(0x4193de)
    }
}
