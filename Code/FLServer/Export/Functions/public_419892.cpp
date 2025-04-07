#include "FLServer-PCH.h"

PROC_DECLARE(0x419892, internal_419892, public_419892);
extern "C" NAKED register_t __cdecl internal_419892()
{
    __asm
    {
        jmp dword ptr ds : [public_41b874]
        UNREACHABLE_TRAP(0x419892)
    }
}
