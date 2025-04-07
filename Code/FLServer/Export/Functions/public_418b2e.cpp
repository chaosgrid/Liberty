#include "FLServer-PCH.h"

PROC_DECLARE(0x418b2e, internal_418b2e, public_418b2e);
extern "C" NAKED register_t __cdecl internal_418b2e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b414]
        UNREACHABLE_TRAP(0x418b2e)
    }
}
