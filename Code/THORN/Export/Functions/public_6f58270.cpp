#include "THORN-PCH.h"

PROC_DECLARE(0x6f58270, internal_6f58270, public_6f58270);
extern "C" NAKED register_t __cdecl internal_6f58270()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0dc]
        UNREACHABLE_TRAP(0x6f58270)
    }
}
