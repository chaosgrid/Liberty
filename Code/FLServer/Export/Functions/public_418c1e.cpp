#include "FLServer-PCH.h"

PROC_DECLARE(0x418c1e, internal_418c1e, public_418c1e);
extern "C" NAKED register_t __cdecl internal_418c1e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4b8]
        UNREACHABLE_TRAP(0x418c1e)
    }
}
