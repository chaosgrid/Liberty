#include "FLServer-PCH.h"

PROC_DECLARE(0x418690, internal_418690, public_418690);
extern "C" NAKED register_t __cdecl internal_418690()
{
    __asm
    {
        jmp dword ptr ds : [public_41b024]
        UNREACHABLE_TRAP(0x418690)
    }
}
