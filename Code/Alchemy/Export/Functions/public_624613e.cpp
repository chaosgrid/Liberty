#include "Alchemy-PCH.h"

PROC_DECLARE(0x624613e, internal_624613e, public_624613e);
extern "C" NAKED register_t __cdecl internal_624613e()
{
    __asm
    {
        jmp dword ptr ds : [public_624b054]
        UNREACHABLE_TRAP(0x624613e)
    }
}
