#include "FLServer-PCH.h"

PROC_DECLARE(0x418720, internal_418720, public_418720);
extern "C" NAKED register_t __cdecl internal_418720()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba8c]
        UNREACHABLE_TRAP(0x418720)
    }
}
