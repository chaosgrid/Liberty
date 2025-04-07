#include "FLServer-PCH.h"

PROC_DECLARE(0x419832, internal_419832, public_419832);
extern "C" NAKED register_t __cdecl internal_419832()
{
    __asm
    {
        jmp dword ptr ds : [public_41b10c]
        UNREACHABLE_TRAP(0x419832)
    }
}
