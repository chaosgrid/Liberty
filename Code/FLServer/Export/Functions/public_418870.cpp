#include "FLServer-PCH.h"

PROC_DECLARE(0x418870, internal_418870, public_418870);
extern "C" NAKED register_t __cdecl internal_418870()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba00]
        UNREACHABLE_TRAP(0x418870)
    }
}
