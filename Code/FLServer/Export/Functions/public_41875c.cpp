#include "FLServer-PCH.h"

PROC_DECLARE(0x41875c, internal_41875c, public_41875c);
extern "C" NAKED register_t __cdecl internal_41875c()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba64]
        UNREACHABLE_TRAP(0x41875c)
    }
}
