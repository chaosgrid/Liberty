#include "FLServer-PCH.h"

PROC_DECLARE(0x418fde, internal_418fde, public_418fde);
extern "C" NAKED register_t __cdecl internal_418fde()
{
    __asm
    {
        jmp dword ptr ds : [public_41b744]
        UNREACHABLE_TRAP(0x418fde)
    }
}
