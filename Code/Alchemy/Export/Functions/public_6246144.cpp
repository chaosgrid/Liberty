#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246144, internal_6246144, public_6246144);
extern "C" NAKED register_t __cdecl internal_6246144()
{
    __asm
    {
        jmp dword ptr ds : [public_624b058]
        UNREACHABLE_TRAP(0x6246144)
    }
}
