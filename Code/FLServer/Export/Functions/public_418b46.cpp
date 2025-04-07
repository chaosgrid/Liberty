#include "FLServer-PCH.h"

PROC_DECLARE(0x418b46, internal_418b46, public_418b46);
extern "C" NAKED register_t __cdecl internal_418b46()
{
    __asm
    {
        jmp dword ptr ds : [public_41b424]
        UNREACHABLE_TRAP(0x418b46)
    }
}
