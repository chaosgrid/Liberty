#include "FLServer-PCH.h"

PROC_DECLARE(0x41881c, internal_41881c, public_41881c);
extern "C" NAKED register_t __cdecl internal_41881c()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb38]
        UNREACHABLE_TRAP(0x41881c)
    }
}
