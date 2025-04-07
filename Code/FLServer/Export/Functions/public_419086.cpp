#include "FLServer-PCH.h"

PROC_DECLARE(0x419086, internal_419086, public_419086);
extern "C" NAKED register_t __cdecl internal_419086()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7c0]
        UNREACHABLE_TRAP(0x419086)
    }
}
