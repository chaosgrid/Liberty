#include "FLServer-PCH.h"

PROC_DECLARE(0x418864, internal_418864, public_418864);
extern "C" NAKED register_t __cdecl internal_418864()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba20]
        UNREACHABLE_TRAP(0x418864)
    }
}
