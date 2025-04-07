#include "FLServer-PCH.h"

PROC_DECLARE(0x419002, internal_419002, public_419002);
extern "C" NAKED register_t __cdecl internal_419002()
{
    __asm
    {
        jmp dword ptr ds : [public_41b75c]
        UNREACHABLE_TRAP(0x419002)
    }
}
