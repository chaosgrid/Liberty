#include "FLServer-PCH.h"

PROC_DECLARE(0x418afe, internal_418afe, public_418afe);
extern "C" NAKED register_t __cdecl internal_418afe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3f4]
        UNREACHABLE_TRAP(0x418afe)
    }
}
