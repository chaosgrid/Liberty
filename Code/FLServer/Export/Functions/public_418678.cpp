#include "FLServer-PCH.h"

PROC_DECLARE(0x418678, internal_418678, public_418678);
extern "C" NAKED register_t __cdecl internal_418678()
{
    __asm
    {
        jmp dword ptr ds : [public_41b034]
        UNREACHABLE_TRAP(0x418678)
    }
}
