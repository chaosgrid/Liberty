#include "Alchemy-PCH.h"

PROC_DECLARE(0x62460f8, internal_62460f8, public_62460f8);
extern "C" NAKED register_t __cdecl internal_62460f8()
{
    __asm
    {
        jmp dword ptr ds : [public_624b024]
        UNREACHABLE_TRAP(0x62460f8)
    }
}
