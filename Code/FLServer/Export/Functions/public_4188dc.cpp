#include "FLServer-PCH.h"

PROC_DECLARE(0x4188dc, internal_4188dc, public_4188dc);
extern "C" NAKED register_t __cdecl internal_4188dc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bad8]
        UNREACHABLE_TRAP(0x4188dc)
    }
}
