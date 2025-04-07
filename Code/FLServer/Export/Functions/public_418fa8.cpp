#include "FLServer-PCH.h"

PROC_DECLARE(0x418fa8, internal_418fa8, public_418fa8);
extern "C" NAKED register_t __cdecl internal_418fa8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b720]
        UNREACHABLE_TRAP(0x418fa8)
    }
}
