#include "FLServer-PCH.h"

PROC_DECLARE(0x4190b0, internal_4190b0, public_4190b0);
extern "C" NAKED register_t __cdecl internal_4190b0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7dc]
        UNREACHABLE_TRAP(0x4190b0)
    }
}
