#include "FLServer-PCH.h"

PROC_DECLARE(0x419660, internal_419660, public_419660);
extern "C" NAKED register_t __cdecl internal_419660()
{
    __asm
    {
        jmp dword ptr ds : [public_41b914]
        UNREACHABLE_TRAP(0x419660)
    }
}
