#include "FLServer-PCH.h"

PROC_DECLARE(0x418828, internal_418828, public_418828);
extern "C" NAKED register_t __cdecl internal_418828()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba24]
        UNREACHABLE_TRAP(0x418828)
    }
}
