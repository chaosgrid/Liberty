#include "FLServer-PCH.h"

PROC_DECLARE(0x419916, internal_419916, public_419916);
extern "C" NAKED register_t __cdecl internal_419916()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8b8]
        UNREACHABLE_TRAP(0x419916)
    }
}
