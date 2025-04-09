#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7278, internal_5b7278, public_5b7278);
extern "C" NAKED register_t __cdecl internal_5b7278()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67a8]
        UNREACHABLE_TRAP(0x5b7278)
    }
}
