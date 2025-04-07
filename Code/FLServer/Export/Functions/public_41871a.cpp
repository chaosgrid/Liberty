#include "FLServer-PCH.h"

PROC_DECLARE(0x41871a, internal_41871a, public_41871a);
extern "C" NAKED register_t __cdecl internal_41871a()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba90]
        UNREACHABLE_TRAP(0x41871a)
    }
}
