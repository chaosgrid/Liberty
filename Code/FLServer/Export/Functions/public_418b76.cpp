#include "FLServer-PCH.h"

PROC_DECLARE(0x418b76, internal_418b76, public_418b76);
extern "C" NAKED register_t __cdecl internal_418b76()
{
    __asm
    {
        jmp dword ptr ds : [public_41b444]
        UNREACHABLE_TRAP(0x418b76)
    }
}
