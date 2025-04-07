#include "FLServer-PCH.h"

PROC_DECLARE(0x418a38, internal_418a38, public_418a38);
extern "C" NAKED register_t __cdecl internal_418a38()
{
    __asm
    {
        jmp dword ptr ds : [public_41b36c]
        UNREACHABLE_TRAP(0x418a38)
    }
}
