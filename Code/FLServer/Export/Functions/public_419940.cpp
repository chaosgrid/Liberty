#include "FLServer-PCH.h"

PROC_DECLARE(0x419940, internal_419940, public_419940);
extern "C" NAKED register_t __cdecl internal_419940()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8d8]
        UNREACHABLE_TRAP(0x419940)
    }
}
