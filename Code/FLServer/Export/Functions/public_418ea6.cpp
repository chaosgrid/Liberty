#include "FLServer-PCH.h"

PROC_DECLARE(0x418ea6, internal_418ea6, public_418ea6);
extern "C" NAKED register_t __cdecl internal_418ea6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b66c]
        UNREACHABLE_TRAP(0x418ea6)
    }
}
