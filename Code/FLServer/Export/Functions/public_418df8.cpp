#include "FLServer-PCH.h"

PROC_DECLARE(0x418df8, internal_418df8, public_418df8);
extern "C" NAKED register_t __cdecl internal_418df8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5f8]
        UNREACHABLE_TRAP(0x418df8)
    }
}
