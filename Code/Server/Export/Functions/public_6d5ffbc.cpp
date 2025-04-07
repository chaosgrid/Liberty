#include "Server-PCH.h"

PROC_DECLARE(0x6d5ffbc, internal_6d5ffbc, public_6d5ffbc);
extern "C" NAKED register_t __cdecl internal_6d5ffbc()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64ac0]
        UNREACHABLE_TRAP(0x6d5ffbc)
    }
}
