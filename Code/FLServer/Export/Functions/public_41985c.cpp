#include "FLServer-PCH.h"

PROC_DECLARE(0x41985c, internal_41985c, public_41985c);
extern "C" NAKED register_t __cdecl internal_41985c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0f4]
        UNREACHABLE_TRAP(0x41985c)
    }
}
