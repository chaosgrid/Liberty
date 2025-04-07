#include "FLServer-PCH.h"

PROC_DECLARE(0x418b8e, internal_418b8e, public_418b8e);
extern "C" NAKED register_t __cdecl internal_418b8e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b454]
        UNREACHABLE_TRAP(0x418b8e)
    }
}
