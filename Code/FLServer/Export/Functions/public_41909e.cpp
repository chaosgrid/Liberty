#include "FLServer-PCH.h"

PROC_DECLARE(0x41909e, internal_41909e, public_41909e);
extern "C" NAKED register_t __cdecl internal_41909e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7d0]
        UNREACHABLE_TRAP(0x41909e)
    }
}
