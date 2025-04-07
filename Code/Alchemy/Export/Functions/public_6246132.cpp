#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246132, internal_6246132, public_6246132);
extern "C" NAKED register_t __cdecl internal_6246132()
{
    __asm
    {
        jmp dword ptr ds : [public_624b04c]
        UNREACHABLE_TRAP(0x6246132)
    }
}
