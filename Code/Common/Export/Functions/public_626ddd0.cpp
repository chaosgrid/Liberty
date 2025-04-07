#include "Common-PCH.h"

PROC_DECLARE(0x626ddd0, internal_626ddd0, public_626ddd0);
extern "C" NAKED register_t __cdecl internal_626ddd0()
{
    __asm
    {
        mov eax, 7
        ret 
        UNREACHABLE_TRAP(0x626ddd0)
    }
}
