#include "FLServer-PCH.h"

PROC_DECLARE(0x41867e, internal_41867e, public_41867e);
extern "C" NAKED register_t __cdecl internal_41867e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b030]
        UNREACHABLE_TRAP(0x41867e)
    }
}
