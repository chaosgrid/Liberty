#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7248, internal_5b7248, public_5b7248);
extern "C" NAKED register_t __cdecl internal_5b7248()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6788]
        UNREACHABLE_TRAP(0x5b7248)
    }
}
