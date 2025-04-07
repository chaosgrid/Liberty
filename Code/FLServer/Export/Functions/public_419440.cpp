#include "FLServer-PCH.h"

PROC_DECLARE(0x419440, internal_419440, public_419440);
extern "C" NAKED register_t __cdecl internal_419440()
{
    __asm
    {
        jmp dword ptr ds : [public_41b980]
        UNREACHABLE_TRAP(0x419440)
    }
}
