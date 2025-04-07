#include "FLServer-PCH.h"

PROC_DECLARE(0x418cc0, internal_418cc0, public_418cc0);
extern "C" NAKED register_t __cdecl internal_418cc0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b528]
        UNREACHABLE_TRAP(0x418cc0)
    }
}
