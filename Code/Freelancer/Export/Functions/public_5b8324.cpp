#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b8324, internal_5b8324, public_5b8324);
extern "C" NAKED register_t __cdecl internal_5b8324()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e94]
        UNREACHABLE_TRAP(0x5b8324)
    }
}
