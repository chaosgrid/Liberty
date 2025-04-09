#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b72ae, internal_5b72ae, public_5b72ae);
extern "C" NAKED register_t __cdecl internal_5b72ae()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67cc]
        UNREACHABLE_TRAP(0x5b72ae)
    }
}
