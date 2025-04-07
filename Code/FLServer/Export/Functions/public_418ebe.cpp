#include "FLServer-PCH.h"

PROC_DECLARE(0x418ebe, internal_418ebe, public_418ebe);
extern "C" NAKED register_t __cdecl internal_418ebe()
{
    __asm
    {
        jmp dword ptr ds : [public_41b67c]
        UNREACHABLE_TRAP(0x418ebe)
    }
}
