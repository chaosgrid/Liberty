#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246110, internal_6246110, public_6246110);
extern "C" NAKED register_t __cdecl internal_6246110()
{
    __asm
    {
        jmp dword ptr ds : [public_624b038]
        UNREACHABLE_TRAP(0x6246110)
    }
}
