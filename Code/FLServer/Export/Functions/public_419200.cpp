#include "FLServer-PCH.h"

PROC_DECLARE(0x419200, internal_419200, public_419200);
extern "C" NAKED register_t __cdecl internal_419200()
{
    __asm
    {
        jmp dword ptr ds : [public_41b250]
        UNREACHABLE_TRAP(0x419200)
    }
}
