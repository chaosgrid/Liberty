#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b82dc, internal_5b82dc, public_5b82dc);
extern "C" NAKED register_t __cdecl internal_5b82dc()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e74]
        UNREACHABLE_TRAP(0x5b82dc)
    }
}
