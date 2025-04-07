#include "THORN-PCH.h"

PROC_DECLARE(0x6f58330, internal_6f58330, public_6f58330);
extern "C" NAKED register_t __cdecl internal_6f58330()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a15c]
        UNREACHABLE_TRAP(0x6f58330)
    }
}
