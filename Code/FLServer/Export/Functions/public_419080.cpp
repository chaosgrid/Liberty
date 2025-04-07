#include "FLServer-PCH.h"

PROC_DECLARE(0x419080, internal_419080, public_419080);
extern "C" NAKED register_t __cdecl internal_419080()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7bc]
        UNREACHABLE_TRAP(0x419080)
    }
}
