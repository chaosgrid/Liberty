#include "FLServer-PCH.h"

PROC_DECLARE(0x418c90, internal_418c90, public_418c90);
extern "C" NAKED register_t __cdecl internal_418c90()
{
    __asm
    {
        jmp dword ptr ds : [public_41b504]
        UNREACHABLE_TRAP(0x418c90)
    }
}
