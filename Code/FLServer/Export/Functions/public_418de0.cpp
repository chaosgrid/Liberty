#include "FLServer-PCH.h"

PROC_DECLARE(0x418de0, internal_418de0, public_418de0);
extern "C" NAKED register_t __cdecl internal_418de0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5e8]
        UNREACHABLE_TRAP(0x418de0)
    }
}
