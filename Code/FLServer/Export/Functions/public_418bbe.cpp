#include "FLServer-PCH.h"

PROC_DECLARE(0x418bbe, internal_418bbe, public_418bbe);
extern "C" NAKED register_t __cdecl internal_418bbe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b474]
        UNREACHABLE_TRAP(0x418bbe)
    }
}
