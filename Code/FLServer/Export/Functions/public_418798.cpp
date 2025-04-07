#include "FLServer-PCH.h"

PROC_DECLARE(0x418798, internal_418798, public_418798);
extern "C" NAKED register_t __cdecl internal_418798()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba3c]
        UNREACHABLE_TRAP(0x418798)
    }
}
