#include "FLServer-PCH.h"

PROC_DECLARE(0x419458, internal_419458, public_419458);
extern "C" NAKED register_t __cdecl internal_419458()
{
    __asm
    {
        jmp dword ptr ds : [public_41b990]
        UNREACHABLE_TRAP(0x419458)
    }
}
