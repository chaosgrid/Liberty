#include "FLServer-PCH.h"

PROC_DECLARE(0x419952, internal_419952, public_419952);
extern "C" NAKED register_t __cdecl internal_419952()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8e4]
        UNREACHABLE_TRAP(0x419952)
    }
}
