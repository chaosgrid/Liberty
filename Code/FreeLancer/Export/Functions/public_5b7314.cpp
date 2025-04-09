#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7314, internal_5b7314, public_5b7314);
extern "C" NAKED register_t __cdecl internal_5b7314()
{
    __asm
    {
        jmp dword ptr ds : [public_5c69a8]
        UNREACHABLE_TRAP(0x5b7314)
    }
}
