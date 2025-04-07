#include "FLServer-PCH.h"

PROC_DECLARE(0x418762, internal_418762, public_418762);
extern "C" NAKED register_t __cdecl internal_418762()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba60]
        UNREACHABLE_TRAP(0x418762)
    }
}
