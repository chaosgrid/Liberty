#include "FLServer-PCH.h"

PROC_DECLARE(0x4193c6, internal_4193c6, public_4193c6);
extern "C" NAKED register_t __cdecl internal_4193c6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b958]
        UNREACHABLE_TRAP(0x4193c6)
    }
}
