#include "FLServer-PCH.h"

PROC_DECLARE(0x41886a, internal_41886a, public_41886a);
extern "C" NAKED register_t __cdecl internal_41886a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9fc]
        UNREACHABLE_TRAP(0x41886a)
    }
}
