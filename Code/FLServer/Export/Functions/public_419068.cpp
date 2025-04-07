#include "FLServer-PCH.h"

PROC_DECLARE(0x419068, internal_419068, public_419068);
extern "C" NAKED register_t __cdecl internal_419068()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7ac]
        UNREACHABLE_TRAP(0x419068)
    }
}
