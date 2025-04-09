#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b82ee, internal_5b82ee, public_5b82ee);
extern "C" NAKED register_t __cdecl internal_5b82ee()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e68]
        UNREACHABLE_TRAP(0x5b82ee)
    }
}
