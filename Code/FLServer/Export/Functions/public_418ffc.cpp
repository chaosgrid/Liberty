#include "FLServer-PCH.h"

PROC_DECLARE(0x418ffc, internal_418ffc, public_418ffc);
extern "C" NAKED register_t __cdecl internal_418ffc()
{
    __asm
    {
        jmp dword ptr ds : [public_41b758]
        UNREACHABLE_TRAP(0x418ffc)
    }
}
