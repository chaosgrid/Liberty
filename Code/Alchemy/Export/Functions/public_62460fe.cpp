#include "Alchemy-PCH.h"

PROC_DECLARE(0x62460fe, internal_62460fe, public_62460fe);
extern "C" NAKED register_t __cdecl internal_62460fe()
{
    __asm
    {
        jmp dword ptr ds : [public_624b02c]
        UNREACHABLE_TRAP(0x62460fe)
    }
}
