#include "Alchemy-PCH.h"

PROC_DECLARE(0x62464c4, internal_62464c4, public_62464c4);
extern "C" NAKED register_t __cdecl internal_62464c4()
{
    __asm
    {
        jmp dword ptr ds : [public_624b08c]
        UNREACHABLE_TRAP(0x62464c4)
    }
}
