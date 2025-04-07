#include "FLServer-PCH.h"

PROC_DECLARE(0x419790, internal_419790, public_419790);
extern "C" NAKED register_t __cdecl internal_419790()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc10]
        UNREACHABLE_TRAP(0x419790)
    }
}
