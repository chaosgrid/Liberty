#include "FLServer-PCH.h"

PROC_DECLARE(0x418f12, internal_418f12, public_418f12);
extern "C" NAKED register_t __cdecl internal_418f12()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6b4]
        UNREACHABLE_TRAP(0x418f12)
    }
}
