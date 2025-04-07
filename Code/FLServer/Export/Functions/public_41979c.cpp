#include "FLServer-PCH.h"

PROC_DECLARE(0x41979c, internal_41979c, public_41979c);
extern "C" NAKED register_t __cdecl internal_41979c()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc08]
        UNREACHABLE_TRAP(0x41979c)
    }
}
