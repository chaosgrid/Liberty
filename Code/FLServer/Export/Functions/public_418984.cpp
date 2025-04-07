#include "FLServer-PCH.h"

PROC_DECLARE(0x418984, internal_418984, public_418984);
extern "C" NAKED register_t __cdecl internal_418984()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2f4]
        UNREACHABLE_TRAP(0x418984)
    }
}
