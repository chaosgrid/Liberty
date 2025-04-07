#include "FLServer-PCH.h"

PROC_DECLARE(0x4187a4, internal_4187a4, public_4187a4);
extern "C" NAKED register_t __cdecl internal_4187a4()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba34]
        UNREACHABLE_TRAP(0x4187a4)
    }
}
