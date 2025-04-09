#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7260, internal_5b7260, public_5b7260);
extern "C" NAKED register_t __cdecl internal_5b7260()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6798]
        UNREACHABLE_TRAP(0x5b7260)
    }
}
