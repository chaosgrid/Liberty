#include "FLServer-PCH.h"

PROC_DECLARE(0x4185fa, internal_4185fa, public_4185fa);
extern "C" NAKED register_t __cdecl internal_4185fa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b068]
        UNREACHABLE_TRAP(0x4185fa)
    }
}
