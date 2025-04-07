#include "FLServer-PCH.h"

PROC_DECLARE(0x418df2, internal_418df2, public_418df2);
extern "C" NAKED register_t __cdecl internal_418df2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5f4]
        UNREACHABLE_TRAP(0x418df2)
    }
}
