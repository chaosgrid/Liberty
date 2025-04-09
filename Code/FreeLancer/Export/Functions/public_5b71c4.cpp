#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71c4, internal_5b71c4, public_5b71c4);
extern "C" NAKED register_t __cdecl internal_5b71c4()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6730]
        UNREACHABLE_TRAP(0x5b71c4)
    }
}
