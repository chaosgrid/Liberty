#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e87c, internal_623e87c, public_623e87c);
extern "C" NAKED register_t __cdecl internal_623e87c()
{
    __asm
    {
        jmp dword ptr ds : [public_624b00c]
        UNREACHABLE_TRAP(0x623e87c)
    }
}
