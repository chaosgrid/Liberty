#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b725a, internal_5b725a, public_5b725a);
extern "C" NAKED register_t __cdecl internal_5b725a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6794]
        UNREACHABLE_TRAP(0x5b725a)
    }
}
