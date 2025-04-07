#include "Deformable2-PCH.h"

PROC_DECLARE(0x6600bbc, internal_6600bbc, public_6600bbc);
extern "C" NAKED register_t __cdecl internal_6600bbc()
{
    __asm
    {
        jmp dword ptr ds : [public_660105c]
        UNREACHABLE_TRAP(0x6600bbc)
    }
}
