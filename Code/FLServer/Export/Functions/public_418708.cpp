#include "FLServer-PCH.h"

PROC_DECLARE(0x418708, internal_418708, public_418708);
extern "C" NAKED register_t __cdecl internal_418708()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba9c]
        UNREACHABLE_TRAP(0x418708)
    }
}
