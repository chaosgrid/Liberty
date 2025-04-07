#include "Alchemy-PCH.h"

PROC_DECLARE(0x62460f2, internal_62460f2, public_62460f2);
extern "C" NAKED register_t __cdecl internal_62460f2()
{
    __asm
    {
        jmp dword ptr ds : [public_624b01c]
        UNREACHABLE_TRAP(0x62460f2)
    }
}
