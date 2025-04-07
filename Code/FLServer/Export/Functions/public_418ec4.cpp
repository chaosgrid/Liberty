#include "FLServer-PCH.h"

PROC_DECLARE(0x418ec4, internal_418ec4, public_418ec4);
extern "C" NAKED register_t __cdecl internal_418ec4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b680]
        UNREACHABLE_TRAP(0x418ec4)
    }
}
