#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1dd0, internal_6db1dd0, public_6db1dd0);
extern "C" NAKED register_t __cdecl internal_6db1dd0()
{
    __asm
    {
        jmp dword ptr ds : [public_6db3200]
        UNREACHABLE_TRAP(0x6db1dd0)
    }
}
