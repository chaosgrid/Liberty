#include "FLServer-PCH.h"

PROC_DECLARE(0x418f72, internal_418f72, public_418f72);
extern "C" NAKED register_t __cdecl internal_418f72()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1cc]
        UNREACHABLE_TRAP(0x418f72)
    }
}
