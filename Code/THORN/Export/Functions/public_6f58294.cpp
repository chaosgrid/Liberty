#include "THORN-PCH.h"

PROC_DECLARE(0x6f58294, internal_6f58294, public_6f58294);
extern "C" NAKED register_t __cdecl internal_6f58294()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0f4]
        UNREACHABLE_TRAP(0x6f58294)
    }
}
