#include "FLServer-PCH.h"

PROC_DECLARE(0x418654, internal_418654, public_418654);
extern "C" NAKED register_t __cdecl internal_418654()
{
    __asm
    {
        jmp dword ptr ds : [public_41b08c]
        UNREACHABLE_TRAP(0x418654)
    }
}
