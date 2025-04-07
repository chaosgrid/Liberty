#include "FLServer-PCH.h"

PROC_DECLARE(0x418ce4, internal_418ce4, public_418ce4);
extern "C" NAKED register_t __cdecl internal_418ce4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b540]
        UNREACHABLE_TRAP(0x418ce4)
    }
}
