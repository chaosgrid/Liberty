#include "FLServer-PCH.h"

PROC_DECLARE(0x4187ce, internal_4187ce, public_4187ce);
extern "C" NAKED register_t __cdecl internal_4187ce()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba18]
        UNREACHABLE_TRAP(0x4187ce)
    }
}
