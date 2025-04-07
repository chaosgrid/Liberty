#include "FLServer-PCH.h"

PROC_DECLARE(0x418b5e, internal_418b5e, public_418b5e);
extern "C" NAKED register_t __cdecl internal_418b5e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b434]
        UNREACHABLE_TRAP(0x418b5e)
    }
}
