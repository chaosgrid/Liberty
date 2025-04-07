#include "FLServer-PCH.h"

PROC_DECLARE(0x419844, internal_419844, public_419844);
extern "C" NAKED register_t __cdecl internal_419844()
{
    __asm
    {
        jmp dword ptr ds : [public_41b104]
        UNREACHABLE_TRAP(0x419844)
    }
}
