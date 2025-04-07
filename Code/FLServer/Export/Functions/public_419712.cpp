#include "FLServer-PCH.h"

PROC_DECLARE(0x419712, internal_419712, public_419712);
extern "C" NAKED register_t __cdecl internal_419712()
{
    __asm
    {
        jmp dword ptr ds : [public_41b16c]
        UNREACHABLE_TRAP(0x419712)
    }
}
