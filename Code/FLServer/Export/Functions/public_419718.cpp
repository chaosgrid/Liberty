#include "FLServer-PCH.h"

PROC_DECLARE(0x419718, internal_419718, public_419718);
extern "C" NAKED register_t __cdecl internal_419718()
{
    __asm
    {
        jmp dword ptr ds : [public_41b168]
        UNREACHABLE_TRAP(0x419718)
    }
}
