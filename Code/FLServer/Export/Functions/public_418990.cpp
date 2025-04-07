#include "FLServer-PCH.h"

PROC_DECLARE(0x418990, internal_418990, public_418990);
extern "C" NAKED register_t __cdecl internal_418990()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2fc]
        UNREACHABLE_TRAP(0x418990)
    }
}
