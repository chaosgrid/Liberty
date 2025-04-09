#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7206, internal_5b7206, public_5b7206);
extern "C" NAKED register_t __cdecl internal_5b7206()
{
    __asm
    {
        jmp dword ptr ds : [public_5c675c]
        UNREACHABLE_TRAP(0x5b7206)
    }
}
