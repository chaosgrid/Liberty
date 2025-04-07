#include "FLServer-PCH.h"

PROC_DECLARE(0x418744, internal_418744, public_418744);
extern "C" NAKED register_t __cdecl internal_418744()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba74]
        UNREACHABLE_TRAP(0x418744)
    }
}
