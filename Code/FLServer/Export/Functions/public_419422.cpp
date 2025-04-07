#include "FLServer-PCH.h"

PROC_DECLARE(0x419422, internal_419422, public_419422);
extern "C" NAKED register_t __cdecl internal_419422()
{
    __asm
    {
        jmp dword ptr ds : [public_41b96c]
        UNREACHABLE_TRAP(0x419422)
    }
}
