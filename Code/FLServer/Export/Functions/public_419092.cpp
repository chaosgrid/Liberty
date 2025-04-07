#include "FLServer-PCH.h"

PROC_DECLARE(0x419092, internal_419092, public_419092);
extern "C" NAKED register_t __cdecl internal_419092()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7c8]
        UNREACHABLE_TRAP(0x419092)
    }
}
