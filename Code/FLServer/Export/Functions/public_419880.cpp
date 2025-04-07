#include "FLServer-PCH.h"

PROC_DECLARE(0x419880, internal_419880, public_419880);
extern "C" NAKED register_t __cdecl internal_419880()
{
    __asm
    {
        jmp dword ptr ds : [public_41b880]
        UNREACHABLE_TRAP(0x419880)
    }
}
