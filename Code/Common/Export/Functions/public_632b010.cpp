#include "Common-PCH.h"

PROC_DECLARE(0x632b010, internal_632b010, public_632b010);
extern "C" NAKED register_t __cdecl internal_632b010()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x632b010)
    }
}
