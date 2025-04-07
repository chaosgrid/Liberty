#include "FLServer-PCH.h"

PROC_DECLARE(0x419176, internal_419176, public_419176);
extern "C" NAKED register_t __cdecl internal_419176()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2b8]
        UNREACHABLE_TRAP(0x419176)
    }
}
