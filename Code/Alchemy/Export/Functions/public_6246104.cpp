#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246104, internal_6246104, public_6246104);
extern "C" NAKED register_t __cdecl internal_6246104()
{
    __asm
    {
        jmp dword ptr ds : [public_624b030]
        UNREACHABLE_TRAP(0x6246104)
    }
}
