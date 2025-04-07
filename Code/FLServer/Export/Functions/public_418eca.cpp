#include "FLServer-PCH.h"

PROC_DECLARE(0x418eca, internal_418eca, public_418eca);
extern "C" NAKED register_t __cdecl internal_418eca()
{
    __asm
    {
        jmp dword ptr ds : [public_41b684]
        UNREACHABLE_TRAP(0x418eca)
    }
}
