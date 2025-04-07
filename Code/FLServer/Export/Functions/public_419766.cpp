#include "FLServer-PCH.h"

PROC_DECLARE(0x419766, internal_419766, public_419766);
extern "C" NAKED register_t __cdecl internal_419766()
{
    __asm
    {
        jmp dword ptr ds : [public_41b13c]
        UNREACHABLE_TRAP(0x419766)
    }
}
