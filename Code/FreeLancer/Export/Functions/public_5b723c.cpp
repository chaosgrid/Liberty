#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b723c, internal_5b723c, public_5b723c);
extern "C" NAKED register_t __cdecl internal_5b723c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6780]
        UNREACHABLE_TRAP(0x5b723c)
    }
}
