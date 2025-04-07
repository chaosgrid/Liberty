#include "FLServer-PCH.h"

PROC_DECLARE(0x419170, internal_419170, public_419170);
extern "C" NAKED register_t __cdecl internal_419170()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2bc]
        UNREACHABLE_TRAP(0x419170)
    }
}
