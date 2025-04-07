#include "THORN-PCH.h"

PROC_DECLARE(0x6f58264, internal_6f58264, public_6f58264);
extern "C" NAKED register_t __cdecl internal_6f58264()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0d4]
        UNREACHABLE_TRAP(0x6f58264)
    }
}
