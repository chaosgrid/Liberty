#include "FLServer-PCH.h"

PROC_DECLARE(0x419098, internal_419098, public_419098);
extern "C" NAKED register_t __cdecl internal_419098()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7cc]
        UNREACHABLE_TRAP(0x419098)
    }
}
